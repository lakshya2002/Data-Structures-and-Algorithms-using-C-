#include <iostream>
using namespace std;
bool bSearch(int arr,int s,int e, int k){
	//base case
	if(s>e){
		return false;
	}
	
	int mid = s+(e-s)/2;
	
	if(arr[mid]==k){
		return true;
	}
	if (arr[mid]<k){
		return bSearch(arr, mid+1,e,k);
	}
	else{
		return bSearch(arr, s,mid-1,k);
	}
}
int main(){
	int arr[6]={2,4,6,10,14,18};
	int start=0
	int size=6;
	int key=14;
	bool ans = bsearch(arr,start,end,key);
	if(ans){
		cout<<"present"<<endl;
	}
	else{
		cout<<"absent"<<endl;
	}
}
