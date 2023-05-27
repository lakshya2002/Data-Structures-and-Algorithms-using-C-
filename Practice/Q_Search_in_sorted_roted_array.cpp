#include<iostream>
using namespace std;
int binarySearch(vector<int>& arr, int low ,int high, int key){
    int mid = low+(high-low)/2;
    while(low<=high){
        if(key==arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        mid = low+(high-low)/2;
    }
    return -1;

}
int findPivot(vector<int>& arr, int n){
	int start =0;
	int end =n-1;
	int mid = start + (end-start)/2;
	while(start<end){
		if(arr[mid]>=arr[0]){
			start=mid+1;
		}
		else{
			end=mid;
		}
		mid=start+(end-start)/2;
	}
	return start;
} 
int findPosition(vector<int>& arr, int n, int k){   

    int low =0;
    int high=n-1;
    int mid =low+(high-low)/2;
    int pivot = findPivot(arr,n);
    if(k>=arr[pivot]&&k<=arr[n-1]){
        return binarySearch(arr,pivot,n-1,k);
    }
    else if{
        return binarySearch(arr,0,pivot-1,k);
    }
    else{
    	return -1;
	}

}

int main(){
	
}
