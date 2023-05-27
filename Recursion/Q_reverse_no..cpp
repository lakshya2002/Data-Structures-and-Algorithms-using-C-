#include <iostream>
using namespace std;
int reverse(int n){
	int reverse = 0;
	int remainder;
	while(n!=0){
		remainder = n%10;
		reverse = reverse*10+remainder;
		n=n/10;
	}
	return reverse;
}
int main(){
	int n = 110;
	cout<<"num : "<<n<<endl;
	cout<<"reverse num : "<<reverse(n)<<endl;
}
