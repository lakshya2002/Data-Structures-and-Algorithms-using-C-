#include<iostream>
using namespace std;
int main(){
	int a,b,choice;
	cout<<"enter your 1st no. : ";
	cin>>a;
	cout<<"enter your 2nd no. : ";
	cin>>b;
	cout<<"enter 1.addition, 2.subtraction, 3.multiplication, 4.division, 5.modulus";
	cout<<"enter your choice : ";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"a+b = "<<(a+b)<<endl;
			break;
		case 2:
			cout<<"a-b = "<<(a-b)<<endl;
			break;
		case 3:
			cout<<"a*b = "<<(a*b)<<endl;
			break;
		case 4:
			cout<<"a/b = "<<(a/b)<<endl;
			break;
		case 5:
			cout<<"a%b = "<<(a%b)<<endl;
			break;				
	}
}
