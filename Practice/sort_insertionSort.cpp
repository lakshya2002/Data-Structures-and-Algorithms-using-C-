#include <iostream>
using namespace std;
int main(){
	int arr[20] = {2,5,3,6,4,7};
	int n=6;
//	cout<<arr;
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	cout<<arr;
//	cout<<bubbleSort(arrr,6);	
	}		
}
