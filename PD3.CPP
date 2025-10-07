#include <iostream>
using namespace std;

class StudentProfile {
public:
    string name;
    string Class;
    string roll_no;

    virtual void getdata() {
        cout << "Enter the Name: ";
        getline(cin, name);
        cout << "Enter the Class: ";
        getline(cin, Class);
        cout << "Roll Number: ";
        getline(cin, roll_no);
    }

    virtual void displaydata() {
        cout << "Name of the Student: " << name << endl;
        cout << "Class: " << Class << endl;
        cout << "Roll Number: " << roll_no << endl;
    }

    virtual ~StudentProfile() = default; 
};

class Clubmember : virtual public StudentProfile {
public:
    string Department;
    string Work;

    void getdata() override {
        StudentProfile::getdata();
        cout << "Enter the Department of Club: ";
        getline(cin, Department);
        cout << "Enter the Work: ";
        getline(cin, Work);
    }

    void displaydata() override {
        StudentProfile::displaydata();
        cout << "Club Department: " << Department << endl;
        cout << "Work Student Does: " << Work << endl;
    }
};

class Volunter : virtual public StudentProfile {
public:
    string Activity;

    void getdata() override {
        StudentProfile::getdata();
        cout << "Enter the Activity: ";
        getline(cin, Activity);
    }

    void displaydata() override {
        StudentProfile::displaydata();
        cout << "Activity: " << Activity << endl;
    }
};

class ActiveStudent : public Clubmember, public Volunter {
public:
    void getdata() override {
        Clubmember::getdata(); 
    }

    void displaydata() override {
        Clubmember::displaydata();
        Volunter::displaydata();
        cout << "Activity: " << Activity << endl;
        cout << "Student is Active." << endl;
    }
};

int main() {
    Clubmember c1;
    Volunter c2;
    ActiveStudent s1;

    cout << "Club Member Data: " << endl;
    c1.getdata();
    c1.displaydata();

    cout << "\nVolunteer Data: " << endl;
    c2.getdata();
    c2.displaydata();

    cout << "\nActive Student: " << endl;
    s1.getdata();
    s1.displaydata();

    return 0;
}
