#include<iostream>
using namespace std;
void sayDigits(int n, string arr[]){
	if (n==0){
		return ;
	}
	//extracting digits
	int digit = n%10;
	n=n/10;
	
	//recursive call for remaining
	sayDigits(n,arr);	
	
	cout<<arr[digit]<<" ";
}
int main(){
	string arr1[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
	int n=412;
	cout<<endl;
    sayDigits(n, arr1);
    cout<<endl;
	
}
