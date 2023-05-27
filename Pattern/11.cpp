/*
	enter the number : 4
	AAAA	
	BBBB
	CCCC
	DDDD
*/
#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number : ";
	cin>>n;
	int i=1;
	while(i<=n){
		int j =1;
		while(j<=n){
			char ch = 'A'+i-1;  //typecasting
			cout<<ch;
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
}
