/*
	enter the number : 3
	ABC
	BCD
	CDE
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
			char ch = 'A'+i+j-2;
			cout<<ch;
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
}
