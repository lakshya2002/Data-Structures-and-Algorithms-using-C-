/*
	enter the number : 3
	ABC
	DEF
	GHI
*/
#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number : ";
	cin>>n;
	int i=1;
	char start_ch = 'A';
	while(i<=n){
		int j =1;
		while(j<=n){
			cout<<start_ch;
			start_ch = start_ch +1;
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
}
