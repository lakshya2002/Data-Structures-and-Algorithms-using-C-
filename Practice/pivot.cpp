#include<iostream>
using namespace std;
int findPivot(int arr[], int n){
	int start =0;
	int end =n-1;
	int mid = start + (end-start)/2;
	while(start<end){
		if(arr[0]<=arr[mid]){
//			start=mid+1;
//			start=mid;
			start=mid+1;
		}
		else{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	return end;
}
int printArray(int arr[],  int n){
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[8] ={5,6,7,8,9,10,2,3};
	 cout<<"array is : ";
	 printArray(arr,8);
	 cout<<endl;
	 cout<<"pivot eleemnt is present at index :"<<findPivot(arr,8)<<endl;
	 
	 int arr2[5] = {7,9,1,2,3};
	 cout<<"array is : ";
	 printArray(arr2,5);
	 cout<<endl;
	 cout<<"pivot eleemnt is present at index :"<<findPivot(arr2,5)<<endl;	 
}
