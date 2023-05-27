#include<iostream>
using namespace std;
int reverseArray(int arr[],int n){
	int temp;
	int start=0;
	int end=n-1;
	while(start<=end){
		
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
//		swap(arr[start],arr[end]);
		start++;
		end--;
	}

}
int printArray(int arr[],int n){
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[5]={1,2,3,4,5};
	
	reverseArray(arr,5);
	printArray(arr,5);
}
