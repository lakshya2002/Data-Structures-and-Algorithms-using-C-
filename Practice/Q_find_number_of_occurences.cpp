#include <iostream>
using namespace std;
int firstOccur(int arr[],int n, int key){
	int start = 0;
	int end = n-1;
	int mid = start+(end-start)/2;
	int ans = -1;
	while(start<=end){
		if (key==arr[mid]){
			ans = mid;
			end = mid-1;
		}
		else if (key<arr[mid]){
			end=mid-1;
		}
		else if(key>arr[mid]){
			start = mid+1;
		}
		mid = start+(end-start)/2;	
	} 	 
	return ans;
}
int lastOccur(int arr[],int n, int key){
	int start = 0;
	int end = n-1;
	int mid = start+(end-start)/2;
	int ans = -1;
	while(start<=end){
		if (key==arr[mid]){
			ans = mid;
			start = mid+1;
		}
		else if (key<arr[mid]){
			end=mid-1;
		}
		else if(key>arr[mid]){
			start = mid+1;
		}
		mid = start+(end-start)/2;	
	}
	return ans;
}
int printArray(int arr[],int n){
	for (int i=0 ;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[10] = {3,4,5,5,5,5,5,5,5,45};
	printArray(arr,10);
	cout<<endl;
	cout<<"first occurence : "<<firstOccur(arr,10,5)<<endl;
	cout<<"last occurence : "<<lastOccur(arr,10,5)<<endl;
	cout<<"total no. of occurences : "<< (lastOccur(arr,10,5) - firstOccur(arr,10,5))+1<<endl;
}
