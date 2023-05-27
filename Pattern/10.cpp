/*
	Enter the number: 4
	1
	21
	321
	4321
*/
#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	int i =1;
	
	while(i<=n){
		int j = 1;
		int value = i;
		while (j<=i){
//			cout<<i-j+1;
			cout<<value;   
			value=value-1;    // X
			j=j+1;			
		}
		cout<<endl;
		i=i+1;
	}
	
}
