#include <iostream>
using namespace std;
int getMax(int arr[], int n){
	int max = INT_MIN;
	for(int i=0;i<n;i++){
		if (arr[i]>max){
			max = arr[i];
		}
	}
	return max;
}
int getMin(int arr[], int n){
	int min = INT_MAX;
	for(int i=0;i<n;i++){
		if (arr[i]<min){
			min = arr[i];
		}
		//maxi = max(maxi,arr[i])
	}
	return min;
}
int main(){
	int arr[4]={1,4,6,8};
	
	cout<<"max"<<getMax(arr,4)<<endl;
	
	cout<<"min"<<getMin(arr,4)<<endl;
}
