#include <iostream>
using namespace std;

class CustomerProfile{
    private:
        string name;
    public:
       CustomerProfile(){
            cout<<"Enter the Name of Customer: ";
            cin>>name;
            cout <<"\n";
        }

        CustomerProfile operator +(string tag){
            CustomerProfile temp;
            temp.name = temp.name + tag;
            return temp;
        }

        CustomerProfile operator =(CustomerProfile c){
            CustomerProfile temp;
            temp.name = name;
            return temp;
        }

        void dispay(){
            cout<<"Name of the Customer: " << name<<endl<<endl;
        }

    };

    int main(){
        CustomerProfile customer;
        cout<<"Data of First Customer: "<<endl;
        customer.dispay();

        CustomerProfile vipcustomer = customer + "-- VIP";;
        cout<<"Customer with Suffix VIP" <<endl;
        vipcustomer.dispay();

        CustomerProfile customercopy = customer;
        cout<<"Customer Data : "<<endl;
        customercopy.dispay();

        
        return 0;
    }