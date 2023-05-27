#include<iostream>
using namespace std;
int climbStairs(int n){
	if(n<0){
		return 0;
	}
	if(n==0){
		return 1;
	}
//	int ans = climbStairs[n-1]+climbStairs[n-2];
	return climbStairs[n-1]+climbStairs[n-2];
}
int calStairs(int n){
	return climbStairs(n);
}
int main(){
	
	cout<<climbStairs(4)<<endl;
	
}
