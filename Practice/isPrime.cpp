#include <iostream>
using namespace std;
int isPrime(int n){
	for (int i=2;i<n;i++){
		if(n%i!=0){
			return 1;
		}
		return 0;
	}
}
int main(){
	int ans = isPrime(4);
	cout<<ans;
	
}
