#include <iostream>
using namespace std;

template <class T>
T calculatetotal(T unit, T rate){
    int extra;
    T extrarate;
    if(unit < 100){
    return unit * rate;
    }
    else{
        extra = unit-100;
        unit = unit - extra;
        extrarate = extra * (rate*2);
        return unit * rate + extrarate;
    }
}
int main(){
    string name;
    float unit;
    float rate;
    cout<<"Enter the Name of the Customer: ";
    cin>>name;
    cout<<"Enter the unit Consumed: ";
    cin >>unit;
    cout << "Enter the Rate of Units: ";
    cin >> rate;
    cout<<"Entered Name: "<<name<<endl;
    cout<<"Unit Consumed: "<<unit<<endl;
    cout<<"Rate Per Unit if Below 100: "<<rate<<endl;
    cout<<"Rate of Units Above 100: "<<rate*2<<endl;
    cout <<"Total of the Bill: "<< calculatetotal(unit , rate)<<endl;
    
    
}
