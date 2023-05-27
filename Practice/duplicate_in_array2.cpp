#include<iostream>
using namespace std;
int findDuplicate(vector<int> , &arr){
	int ans = 0;
	for(int i=0;i<arr.size();i++){
		ans = ans^arr[i];
	}
	for(int i=1;i<arr.size();i++){
		ans=ans^i;
	}
	return ans;
}
int main(){
	int arr[5]={1,2,2,3,4};
	cout<<findDuplicate(arr,5);
//	printArray(arr,5);	
}
