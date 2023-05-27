#include <iostream>
using namespace std;
int alternateRev(int arr[],int n){
	int i=0;
	int j=1;
	while(j<=n-1){
		swap(arr[i],arr[j]);
		i=i+2;
		j=j+2;
	}
	//for(int i=0;i<n;i+=2){
	//swap(arr[i],arr[i+1])
	//}
}
int printArray(int arr[],int n){
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[6]={1,2,3,4,5,6};
	alternateRev(arr,6);
	printArray(arr,6);
	cout<<endl;
	int arr2[7] = {1,2,3,4,5,6,7};
	alternateRev(arr2,7);
	printArray(arr2,7);
}
