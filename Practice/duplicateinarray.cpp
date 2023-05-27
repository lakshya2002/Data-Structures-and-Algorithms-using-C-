#include <iostream> 
using namespace std;
int duplicateArray(int arr[],int n){
	for (int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				cout<< arr[j]<<" ";
			}
		}
	}
}
int printArray(int arr[],int n){
	for (int i=0;i<n;i++){
		cout<<arr[i];
	}
}
int main(){
	int arr[5]={1,2,2,3,4};
	duplicateArray(arr,5);
	printArray(arr,5);
	cout<<endl;
	int arr2[8]={1,2,5,7,4,6,7,9};
	duplicateArray(arr2,8);
	printArray(arr2,8);
	cout<<endl;
	int arr3[8]={4,3,2,7,8,2,3,1};
	duplicateArray(arr3,8);
	printArray(arr3,8);
}
