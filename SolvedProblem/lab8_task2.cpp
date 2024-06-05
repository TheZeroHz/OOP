#include <iostream>
using namespace std;

class Test{
	int val;
	public:
	Test(int x=0):val(x){}
	
	Test operator + (int a){
	return Test(val+a);
	}
	
	Test operator * (Test obj){
	return Test(val*obj.val);
	}
	
	void show(){
	cout<<val<<endl;
	}
	
};


int main(){
	Test obj1(5),obj2(10),obj3;
	obj3=(obj1+2)*obj2;
	obj3.show();
}
