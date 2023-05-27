#include<iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	switch(num){
		case 1:
			cout<<"case-1";
			break;
		case 2:
			cout<<"case-2";
			//continue;        //[Error] continue statement not within a loop
			break;
		case 3:
			cout<"case-3";
			break;
		default: cout<<"default case"	;	
	}
}
