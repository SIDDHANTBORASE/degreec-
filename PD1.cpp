#include <iostream>
#include <string>
using namespace std;

// Base class
class University {
protected:
    string universityName;
    string location;

public:
    virtual void getData() {
        cout << "Enter University Name: ";
        getline(cin, universityName);
        cout << "Enter Location of University: ";
        getline(cin, location);
    }

    virtual void displayInfo() const {
        cout << "\n--- University Details ---" << endl;
        cout << "University Name: " << universityName << endl;
        cout << "Location: " << location << endl;
    }
};

// Derived class 1
class College : public University {
protected:
    string collegeName;
    string principalName;

public:
    void getData() override {
        cout << "\nEnter College Name: ";
        getline(cin, collegeName);
        cout << "Enter Principal Name: ";
        getline(cin, principalName);
    }

    void displayInfo() const override {
        cout << "\n--- College Details ---" << endl;
        cout << "College Name: " << collegeName << endl;
        cout << "Principal Name: " << principalName << endl;
    }
};

// Derived class 2
class Department : public College {
private:
    string departmentName;
    int staffCount;
    int classroomCount;

public:
    void getData() override {
        cout << "=== Enter University Details ===" << endl;
        University::getData();

        cout << "\n=== Enter College Details ===" << endl;
        College::getData();

        cout << "\n=== Enter Department Details ===" << endl;
        cout << "Enter Department Name: ";
        getline(cin, departmentName);

        cout << "Enter Staff Count: ";
        cin >> staffCount;

        cout << "Enter Number of Classrooms: ";
        cin >> classroomCount;
        cin.ignore(); // clear input buffer
    }

    void displayInfo() const override {
        cout << "\n=========== FULL DEPARTMENT INFO ===========" << endl;

        cout << "\n--- Department Details ---" << endl;
        cout << "Department Name: " << departmentName << endl;
        cout << "Staff Count: " << staffCount << endl;
        cout << "Classroom Count: " << classroomCount << endl;

        College::displayInfo();
        University::displayInfo();
    }
};

// Main Function
int main() {
    Department dept;
    dept.getData();
    dept.displayInfo();

    return 0;
}
