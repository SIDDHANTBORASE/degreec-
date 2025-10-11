#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Template class definition
template <class T1, class T2>
class GroceryCalculator {
private:
    string itemName;
    T1 quantity;
    T2 pricePerUnit;

public:
    // Function to input grocery details
    void inputDetails() {
        cout << "Enter item name: ";
        cin >> itemName;
        cout << "Enter quantity: ";
        cin >> quantity;
        cout << "Enter price per unit: ";
        cin >> pricePerUnit;
    }

    // Function to calculate total cost
    T2 calculateTotalCost() {
        return quantity * pricePerUnit;
    }

    // Function to display grocery details
    void displayDetails() {
        cout << left << setw(15) << itemName
             << setw(10) << quantity
             << setw(10) << pricePerUnit
             << setw(10) << calculateTotalCost() << endl;
    }
};

// Main function
int main() {
    int n;
    cout << "Enter number of grocery items: ";
    cin >> n;

    // Create array of GroceryCalculator objects
    GroceryCalculator<int, float> items[n];

    cout << "\n--- Enter Grocery Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nItem " << i + 1 << ":\n";
        items[i].inputDetails();
    }

    cout << "\n------ Grocery Bill ------\n";
    cout << left << setw(15) << "Item"
         << setw(10) << "Qty"
         << setw(10) << "Price"
         << setw(10) << "Total" << endl;
    cout << "------------------------------------------\n";

    float grandTotal = 0;
    for (int i = 0; i < n; i++) {
        items[i].displayDetails();
        grandTotal += items[i].calculateTotalCost();
    }

    cout << "------------------------------------------\n";
    cout << left << setw(35) << "Grand Total: " << grandTotal << endl;

    return 0;
}
