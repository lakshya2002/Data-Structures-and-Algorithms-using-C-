#include <bits/stdc++.h> 
int binary_eqv(int n){
	int answer =0;
	int i = 0;
	while(n!=0){
		int digit = n&1;
		answer = (digit * pow(10,i))+answer;
		n=n>>1;
		i++;
	} 
	return answer;
}
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
bool checkPalindrome(long long N)
{
	int original = binary_eqv(N);
	int reversed = reverse(original);
	if (original == reversed){
		return true;
	}		
	return false;
}
