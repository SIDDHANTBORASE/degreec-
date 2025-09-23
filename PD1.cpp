#include <iostream>
using namespace std;

class University{
private:
	string Uname ="Pune University";

public:
    virtual void displayInfo(){  	
       	 	cout << "Name of the University: " << Uname << endl;
    }
};

class College : public University {
private:
    string Collagename = "Matoshri College Of Engineering: " ;

public:
    void displayInfo() override {
         	cout << "Name of the College" << Collagename << endl;
    }
};

class Department : public College {
private: 
	string DepartmentName= "AIDS";
public:
	void displayInfo() override {
		
        cout << "Name of the Department: " << DepartmentName<< endl;
	College::displayInfo();	
	University::displayInfo();
		
    	}	
};

int main() {
    Department c;
    c.displayInfo();
    return 0;
}
