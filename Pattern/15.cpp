/*
	 enter the number : 3
	A
	BB
	CCC
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
		while(j<=i){
			char ch = 'A'+i-1;
			cout<<ch;
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
}
