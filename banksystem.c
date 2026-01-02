#include <stdio.h>
#include <string.h>

#define MAX 99

struct BankDetails {
    double accbal;
    char accno[15];
    char name[50];
    char address[100];
    int pin;
};

struct BankDetails cust[MAX];
int ccount = 0;

int searchCustomer(char accno[]) {
    for (int i = 0; i < ccount; i++) {
        if (strcmp(cust[i].accno, accno) == 0)
            return i;
    }
    return -1;
}

void addCustomer() {
    if (ccount == MAX) {
        printf("Maximum accounts reached!\n");
        return;
    }

    sprintf(cust[ccount].accno, "ABC0000%d", ccount);

    printf("Account Number: %s\n", cust[ccount].accno);

    printf("Enter Name: ");
    scanf(" %[^\n]", cust[ccount].name);

    printf("Enter Address: ");
    scanf(" %[^\n]", cust[ccount].address);

    cust[ccount].accbal = 100.0;

    printf("Enter 4-digit PIN: ");
    scanf("%d", &cust[ccount].pin);

    ccount++;
    printf("Account Created Successfully!\n");
}

int login(int index) {
    int pin;
    printf("Enter PIN: ");
    scanf("%d", &pin);

    if (cust[index].pin == pin)
        return 1;

    printf("Incorrect PIN!\n");
    return 0;
}

void withdrawAmount() {
    char acc[15];
    double amt;

    printf("Enter Account Number: ");
    scanf("%s", acc);

    int index = searchCustomer(acc);
    if (index == -1) {
        printf("Account Not Found!\n");
        return;
    }

    if (!login(index)) return;

    printf("Enter Withdrawal Amount: ");
    scanf("%lf", &amt);

    if (amt <= 0 || amt > cust[index].accbal) {
        printf("Invalid or Insufficient Balance!\n");
        return;
    }

    cust[index].accbal -= amt;
    printf("Withdrawal Successful! New Balance: %.2lf\n", cust[index].accbal);
}

void depositAmount() {
    char acc[15];
    double amt;

    printf("Enter Account Number: ");
    scanf("%s", acc);

    int index = searchCustomer(acc);
    if (index == -1) {
        printf("Account Not Found!\n");
        return;
    }

    if (!login(index)) return;

    printf("Enter Deposit Amount: ");
    scanf("%lf", &amt);

    if (amt <= 0) {
        printf("Invalid Amount!\n");
        return;
    }

    cust[index].accbal += amt;
    printf("Deposit Successful! New Balance: %.2lf\n", cust[index].accbal);
}

void displayDetails() {
    char acc[15];

    printf("Enter Account Number: ");
    scanf("%s", acc);

    int index = searchCustomer(acc);
    if (index == -1) {
        printf("Account Not Found!\n");
        return;
    }

    printf("\nAccount No : %s", cust[index].accno);
    printf("\nName       : %s", cust[index].name);
    printf("\nAddress    : %s", cust[index].address);
    printf("\nBalance    : %.2lf\n", cust[index].accbal);
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Bank System Menu ---\n");
        printf("1. Add Account\n");
        printf("2. Withdraw Amount\n");
        printf("3. Deposit Amount\n");
        printf("4. Display Account Details\n");
        printf("5. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addCustomer(); break;
            case 2: withdrawAmount(); break;
            case 3: depositAmount(); break;
            case 4: displayDetails(); break;
            case 5: printf("Exiting System...\n"); return 0;
            default: printf("Invalid Choice!\n");
        }
    }
}
