/*
	Enter the number : 4
	1  2   3  4
	5  6   7  8
	9  10 11  2
	13 14 15 16
*/

#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	int count=1;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<count<<" ";
			count=count+1;
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
	
}
