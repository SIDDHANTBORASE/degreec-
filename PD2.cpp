#include <iostream>
using namespace std;

class SmartLight{
public:
	void LightFeature(){
	  cout<<"Smart Light Turning On the Lights"<<endl;
}
};

class SmartFan{
public:
	void FanFeature(){
	  cout<<"Smart Fan is Turning On" <<endl;
}
};

class SmartAC{
public:
	void AcFeature(){
	  cout<<"Ac is Turning On "<<endl;
}
};

class SmartPhone:public SmartLight,public SmartFan,public SmartAC{
public:
	void DisplayFeatures(){
	  cout<<"Features of the Phone: "<<endl;
	  SmartLight::LightFeature();
	  SmartFan::FanFeature();
	  SmartAC::AcFeature();	
}
};


int main(){
	SmartPhone phone;
	phone.DisplayFeatures();
	return 0;
	
}
