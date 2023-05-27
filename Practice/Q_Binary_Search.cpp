#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
	int start=0;
	int end=n-1;
//	int mid=(start+end)/2;
	int mid=start+(end-start)/2;
	while(start<=end){
		if(key==arr[mid]){
			return mid ;
		}
		if(key<arr[mid]){
			 end = mid-1;
		}
		else{
			start=mid+1;
		}
//		mid=(start+end)/2;
		mid=start+(end-start)/2;
	}
	return -1;
}
int printArray(int arr[],int n){
	for (int i=0 ;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[7]={1,2,3,4,5,6,8};
	printArray(arr,7);
	cout<<endl;
	cout<<"Binary Search"<<endl;
	cout<<"2 :"<<binarySearch(arr,7,2)<<endl;
	cout<<"3 :"<<binarySearch(arr,7,3)<<endl;
	cout<<"4 :"<<binarySearch(arr,7,4)<<endl;
	cout<<"5 :"<<binarySearch(arr,7,5)<<endl;	
}
