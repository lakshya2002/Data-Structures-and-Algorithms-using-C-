#include <iostream>
#include <math.h>
using namespace std;

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
bool ispalindrome(int n){
	int num=binary_eqv(n);
	cout<<"binary_equivalent : "<<num<<endl;
	int reversed = 0;
	int original = num;
	int remainder;
	while (num != 0) {
        remainder = original % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
	
	cout<<"reversed : "<<reversed<<endl;
	cout<<"num : "<<original<<endl;
    // palindrome if orignal and reversed are equal
    if (original == reversed)
        return true;
    else
        return false;

}
int main(){
	int n;
	cout<<"Enter the number (in decimal) : ";
	cin>>n;
	cout<<"the binary equivalent is  " <<binary_eqv(n)<<endl;
	int ans = ispalindrome(n);
	if(ans==true){
		cout<<"palindrome"<<endl;
	}
	else{
		cout<<"not palindrome"<<endl;
	}

	
}
