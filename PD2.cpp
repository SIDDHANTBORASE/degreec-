#include <iostream>
using namespace std;

class University{
private:
	string Uname ="Pune University";
	string location= "Pune";

public:
     virtual void Getdata(){
	cout<<"Enter the University Name: " ;
	getline(cin,Uname);
	cout<<"Enter the Location of University: " ;
	getline(cin, location);
    cout<<"\n"<<endl;
}
    virtual void displayInfo(){  	
       	 	cout << "Name of the University: " << Uname << endl;
		cout<< "Location of University: " <<location<<endl;   
 }
};

class College : public University {
private:
    string Collagename = "Matoshri College Of Engineering: " ;
    string Principle_Name ;
	

public:

     void Getdata() override{
    cout<<"\n"<<endl;
    cout<<"College Name :"<<Collagename<<endl;
	cout<<"Enter Name of Principle: ";
	getline(cin,Principle_Name);
}
    void displayInfo() override {
         	cout << "Name of the College: " << Collagename << endl;
		cout<<"Principle Name: " <<Principle_Name <<endl;    
}
};

class Department : public College {
private: 
	string DepartmentName;
	int departmentstaffcount;
	int departmentclassrooms;
public:

	void Getdata() override{
	University::Getdata();
	College::Getdata();
	cout<<"Enter the Department Name " ;
	getline(cin,DepartmentName);
	cout<<"Enter the Staff Count of Department:" ;
	cin>>departmentstaffcount;
	cout<<"Enter the Classrooms Present in The Department: ";
	cin>>departmentclassrooms;
}
	void displayInfo() override {
	cout << endl<<endl;
    cout << "Name of the Department: " << DepartmentName<< endl;
	cout<<"Staff Count of Department:" <<departmentstaffcount <<endl ;
	cout<<"Enter the Classrooms Present in The Department: " <<departmentclassrooms<<endl;
	College::displayInfo();	
	University::displayInfo();
		
    	}	
};

int main() {
    Department c;
    c.Getdata();
    c.displayInfo();
    return 0;
}
