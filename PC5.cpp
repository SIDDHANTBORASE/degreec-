#include <iostream>
using namespace std;

class CaloriesTracker{
     private:    
        float calories;

    public:
        CaloriesTracker(float c = 0) {
            calories = c;
        }

        void display() {
            cout << "Calories Burned: " << calories << " kcal" << endl;
        }

        friend class StepsTracker;
}; 

class StepsTracker {
    private:
        int steps;

    public:
        StepsTracker(int s = 0) {
            steps = s;
        }

        void display() {
            cout << "Steps: " << steps << endl;
        }

        operator CaloriesTracker();
    };



StepsTracker::operator CaloriesTracker() {
    float cal = steps * 0.04;
    return CaloriesTracker(cal);
}

int main() {
    long steps;
    cout<<"Enter the Steps You Covered Today: ";
    cin>>steps;
    StepsTracker steptrack1(steps);

    cout << "Steps Data:\n";
    steptrack1.display();
    
    CaloriesTracker caltrack1;
    caltrack1 = steptrack1; 
    
    cout << "\nCalories Data:\n";
    caltrack1.display();

    return 0;
}
