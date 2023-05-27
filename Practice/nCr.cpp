#include <iostream>
using namespace std;
int factorial(int n){
	int factorial =1;
	for(int i =1;i<=n;i++){
		factorial = factorial * i;
	}
	return factorial;
}

int nCr(int n,int r){
	int ans = factorial(n)/(factorial(r)*factorial((n-r)));
	return ans;
}
int main(){
		
	int ans = nCr(12,7);
	cout<<ans;
}

