//Task-1

#include <iostream>
using namespace std;

//Member Overloading
class Complex{
	int real;
	int img;
	public:
	Complex(int r=0,int i=0):real(r),img(i){}
	
	Complex operator + (Complex num2){	
	return Complex(num2.real+real,num2.img+img);
	}
	
	Complex operator - (Complex num2){
	return Complex(real-num2.real,img-num2.img);
	}
	
	Complex operator * (Complex num2){
	return Complex(real*num2.real,-img*num2.img);
	}
	
	void show(){
	cout<<real;
	if(img>0)cout<<"+"<<img<<"i"<<endl;
	else cout<<img<<"i"<<endl;
	}
	
};

int main(){
	Complex c1(1,2),c2(-2,-5),c3,c4,c5;
	c3=c1+c2;
	c3.show();
	c4=c1-c2;
	c4.show();
	c5=c3*c4;
	c5.show();	
}
