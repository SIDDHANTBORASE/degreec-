#include <iostream>
using namespace std;
class Currency {
    private:
    float amount;

    public:
        Currency() {
            amount = 0;
        }
        Currency(float a) {
            amount = a;
        }
        void display() {
            cout << "Amount: " << amount << " Inr" << endl;
        }
        operator float() {
            return amount;
        }
    };

int main() {
    float basicAmount = 1500.50;
    Currency c1 = basicAmount;
    cout << "After Basic to Class Conversion:\n";
    c1.display();
    float convertedAmount = c1;
    cout << "\nAfter Class to Basic Conversion:\n";
    cout << "Converted Amount: " << convertedAmount << " INR" << endl;
    return 0;
}
