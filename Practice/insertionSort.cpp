#include <iostream>
using namespace std;
int insertionSort(int arr[], int n){
//    int i=1;
    
	for (int i=1;i<n;i++){
		int j=i-1;
		int temp = arr[i];
		for (int j;j>=0;j--){
			if(arr[j]>temp){
				arr[j+1]=arr[j];
			}
			else{
				break;
			}
// 			arr[j+1]=temp;	
		}
		arr[j+1]=temp;
	}
}
int printArray(int arr[], int n){
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[5]={2,1,5,8,7};
	printArray(arr,5);
	cout<<endl;
	int sarr=insertionSort(arr,5);
	cout<<endl;
	printArray(sarr,5);
}
