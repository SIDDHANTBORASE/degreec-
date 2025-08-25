#include <iostream>
using namespace std;
class arrayoperation{
    public:
    int i =0;
    int marks[5];
    void addelement(){
        cout<<"Enter the Elements of array: "<<endl;
        for (i = 0;i <5; i++){
            cin>>marks[i];          
        }
    }
    void getAverage(){
        int total = 0;
        float average =0;
        for (i = 0; i<5 ;i++){
            total += marks[i];
        }
        average = total/5;
        cout<<"Average of the marks: "<<average<<endl;\
    }
};
int main(){
    arrayoperation ac;
    ac.addelement();
    ac.getAverage();
}
