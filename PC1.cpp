#include <iostream>
using namespace std;

class Complex{
private:
    int real, imag;
public:
    Complex(){
        real =0;
        imag =0;
    }

    void getData(){
        cout<<"Enter the Real Number: ";
        cin >> real;
        cout<<"Enter the Imaginary Number: ";
        cin >> imag;
    }
    void Display(){
        cout<<"Real Number: "<<real<<endl;
        cout<<"Imaginary Number: "<<imag<<endl;
    }

    Complex operator +(Complex c){
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag +c.imag;
        return temp;
    }

    Complex operator *(Complex c){
        Complex temp;
        temp.real = real * c.real;
        temp.imag = imag * c.imag;
        return temp;
    }
};

int main(){
    Complex c1, c2 , sum , mul;
    cout<<"Enter the First Complex Numbers: "<<endl;
    c1.getData();

    cout<<"Enter the Second Complex Numbers: "<<endl;
    c2.getData();

    sum = c1+c2;
    mul = c1 * c2;

    cout<<"Addition of the Two Complex Numbers: "<<endl;
    sum.Display();

    cout<<"Multiplication of Two Complex Numbers: "<<endl;
    mul.Display();

    return 0;
    
}