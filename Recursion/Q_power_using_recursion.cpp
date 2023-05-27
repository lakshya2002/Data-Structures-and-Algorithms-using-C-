#include<iostream>
using namespace std;
int power(int a,int b){
	//base case
	if(b==0){
		return 1;
	}
	if(b==1){return a;
	}
	//recursive calls
	int ans = power(a,b/2);
	
	if(b%2==0){//even
		return ans*ans;
	}
	else{
		return a*ans*ans;
	}
}
int main(){
	cout<<power(5,3)<<endl;
}
