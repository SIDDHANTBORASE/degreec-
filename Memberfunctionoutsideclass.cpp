#include <iostream>
using namespace std;

class Rectangle{
    int height;
    int length;
    void Rectangle(int h, int l){
        height =h;
        length = l;
    }
};
void Rectangle::area(){
    int area = height * length;
    cout<<"Area of Rectangle :"<< area<<endl;
}

void Rectangle::perimeter(){
    int peri = 2 * height * length;
    
    cout<<"Perimeter of Rectangle ;" <<peri<<endl;
}
int main(){
    int h =20, l= 20;
    Rectangle rec= new Rectangle(h,l);
    rec.area();
    rec.peri();

}
