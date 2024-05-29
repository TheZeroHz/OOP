

#include <iostream>
using namespace std;
class Inventory{
	int chocolate;
	int egg;
	public:
	Inventory(int c=0,int e=0):chocolate(c),egg(e){}
	Inventory operator + (Inventory &I){
	return Inventory(I.chocolate+chocolate,I.egg+egg);
	}
	Inventory operator - (Inventory &I){
	return Inventory(chocolate-I.chocolate,egg-I.egg);
	}
	void status(){
	cout<<"Chocolate:"<<chocolate<<endl;
	cout<<"Egg:"<<egg<<endl;
	}
	
};


int main(){
	Inventory I1(2,5),I2(9,3),I3;
	I3=I1+I2;
	I3=I3-I2;
	I3.status();
}
