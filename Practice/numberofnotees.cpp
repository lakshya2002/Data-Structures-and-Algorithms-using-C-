#include <iostream>
using namespace std;
int main(){
	int amount;
	cout<<"Enter yout amount : ";
	cin>>amount;
	int rs100,rs50,rs20,rs10;
	
	switch(1){
		case 1:
			rs100 = amount/100;
			amount = amount%100;
			cout<<"100 rs notes : "<<rs100<<endl;								
		case 2:
			rs50 = amount/50;
			amount = amount%50;
			cout<<"50 rs notes : "<< rs50<<endl;
		case 3:
			rs20 = amount/20;
			amount = amount%20;
			cout<<"20 rs notes : "<< rs20<<endl;
		case 4:
			rs10 = amount/10;
			amount = amount%10;
			cout<<"10 rs notes : "<< rs10<<endl;	
			break;
		default:cout<<"errror"	;		
	}
}
