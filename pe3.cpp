  #include <iostream>
#include <limits>
using namespace std;

int main() {
    float amount;
    float withdrawal, deposit;
    int choice;
    string name;

    cout << "Enter the Name of the Customer: ";
    getline(cin, name);

    cout << "Enter the Account Balance: ";
    while (!(cin >> amount) || amount < 0) {
        cout << "Please enter a valid positive amount for the account balance: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    do {
        cout << "\nATM Operations Menu:\n";
        cout << "1) Withdraw Amount\n";
        cout << "2) Deposit Amount\n";
        cout << "3) Display Account Details\n";
        cout << "4) Exit\n";
        cout << "Enter your choice: ";

        while (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number between 1 and 4: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        switch (choice) {
            case 1:
            try{
                cout << "Enter the Withdrawal Amount: ";
                while (!(cin >> withdrawal) || withdrawal <= 0) {
                    cout << "Enter a valid positive amount to withdraw: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                if (withdrawal > amount) {
                   throw(withdrawal);
                } else {
                    amount -= withdrawal;
                    cout << "Amount Withdrawn: " << withdrawal << endl;
                }
            }
            catch(const float amount){
                cout<<"Enter the Sufficient Ammount to Withdraw "<<endl;
                cout<<"Error Account Balance is Low."<<endl;
            }
            break;
            

            case 2:
                try{
                cout << "Enter the Deposit Amount: ";
                while (!(cin >> deposit) || deposit <= 0) {
                   throw(deposit);
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                amount += deposit;
                cout << "Amount Deposited: " << deposit << endl;
            }
            catch(const float amount){
                cout<<"Enter the Positive Amount to Deposite ..";
            }
                break;
            case 3:
                cout << "\nAccount Details:\n";
                cout << "Name: " << name << "\nAccount Balance: " << amount << endl;
                break;
            case 4:
                cout << "Exiting... Thank you!\n";
                break;

            default:
                cout << "Please enter a valid choice between 1 and 4.\n";
        }

    } while (choice != 4);

    return 0;
}
