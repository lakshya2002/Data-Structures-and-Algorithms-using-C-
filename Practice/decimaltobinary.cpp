#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number (in decimal) : ";
	cin>>n;
	int answer =0;
	int i = 0;
	while(n!=0){
		int digit = n&1;
		answer = (digit * pow(10,i))+answer;
		n=n>>1;
		i++;
	} 
	cout<<"the binary equivalent is  " <<answer<<endl;
	
}
