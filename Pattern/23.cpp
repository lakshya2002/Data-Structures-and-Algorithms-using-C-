#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i = 1;
	//
	while(i<=n/2){
		int j=1;
		while(j<=i){
			cout<<"*";
			j=j+1;
		}
		cout<<endl;
		i++;
	}
	//
//	while(i<=n){
//		int j =1;
//		while(j<=n-i+1){
//			cout<<"*";
//			j=j+1;
//		} 
//		cout<<endl;
//		i++;
//	}

	//
//	int space =n-i;
//	while(i<=n){
//		cout<<" ";
//		space--;
//	}
//	int j = 1;
//	while(j<=i){
//		cout<<"*";
//		j=j+1;
//	}
}
