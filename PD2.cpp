#include <iostream>
using namespace std;

class SmartDevice {
public:
	int power;
   	virtual void DisplayFeatures() {
       cout<<"Smart Devices power: "<<power;
    }

};
class SmartLight:public SmartDevice {
public:
    void DisplayFeatures(int op) overrides {
     	SmartDevice::DisplayFeatures();
     	if (power == 0){
     		cout <<"Cant turn On Light."<<endl;
		 	return;
		 }
		if(op != 0){
		cout << "Smart Light Turning On the Lights" << endl;
    
		}
    }
};

class SmartFan {
public:
     void DisplayFeatures() overrides {
     	SmartDevice::DisplayFeatures();
        cout << "Smart Fan is Turning On" << endl;
    }
};

class SmartAC {
public:
     void DisplayFeatures() overrides {
     	SmartDevice::DisplayFeatures();
        cout << "Ac is Turning On" << endl;
    }
};



int main() {
	int choices;
	cout<<"Function of SmartDevices: ";
	do{	
	cout<<"1. Turn on/off light \n2. Turn on/off Ac \n3. Turn on/off Fan \n4. Exit Room." <<endl;
	cin>>choices;
	switch(choices)
    SmartLight light;
    SmartFan Fan;
    SmartAC ac;
    light.DisplayFeatures();
	Fan.DisplayFeatures();
	Ac.DisplayFeatures();
}
    return 0;
}
