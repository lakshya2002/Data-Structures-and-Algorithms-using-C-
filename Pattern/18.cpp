#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	int space=n-i;
	while(i<=n){
		cout<<" ";
		space = space-1;	
	}
	int j =1;
	while(j<=i){
		cout<<"*";
		j = j++;
	}
	cout<<endl;
	i=i+1;
}
