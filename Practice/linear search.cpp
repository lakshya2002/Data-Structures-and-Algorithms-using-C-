#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int key){
	for (int i=0;i<n;i++){
		if(arr[i]==key){
			return 1;
		}
		
	}
	return 0;
}
int main(){
	int arr[5]={1,2,3,45,7};
	int key = 45;
	int ans = linearSearch(arr,5,5);
	cout<<ans;
}
