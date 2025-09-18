#include <iostream>
using namespace std;

class UserProfile{
    private:
        string Name;
        int orders;
        int status = 1;
        
    public:
        void makedata(){
            cout<<"Enter the Name of the User: ";
            cin>>Name;
            orders = 1;
            status = 1; 
        }

        void operator -(){
            status = 0;
        }

        void operator ++(){
            orders++;
        }

        void Display(){
            cout<<"Name of the Users: "<<Name<<endl;
            cout<<"Orders Until Now: "<<orders<<endl;
            cout<<"Account Status: ";
            if (status == 1){
                cout<<"Active \n"<<endl;;
            }
            else{
                cout<<"Deactivated \n"<<endl;
            }
        }
};

int main (){
    UserProfile user1, user2;
    user1.makedata();
    cout<<"User 1 Account Data: "<<endl;
    user1.Display();

    cout<<"Ordering 5 Orders From User 1: "<<endl;
    ++user1;
    ++user1;
    ++user1;
    ++user1;
    cout<<"Data After Orders"<<endl;
    user1.Display();
    
    cout <<"Initiallizing User 2: "<<endl;
    user2.makedata();
    cout <<"Deactiving the User Account: "<<endl;
    -user2;
    cout<<"User 2 Account Data: "<<endl;
    user2.Display();

    return 0;
}