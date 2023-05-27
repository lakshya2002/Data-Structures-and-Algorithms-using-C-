#include <iostream>
using namespace std;
int findPivot(int arr[], int low, int high)
{
    // Base cases
    if (high < low)
        return -1;
    if (high == low)
        return low;
 
    // low + (high - low)/2;
    int mid = (low + high) / 2;
    if (mid < high && arr[mid] > arr[mid + 1])
        return mid;
 
    if (mid > low && arr[mid] < arr[mid - 1])
        return (mid - 1);
 
    if (arr[high] <= arr[mid])
        return findPivot(arr, mid+1, high);
 
    return findPivot(arr, low, mid-1);
}
int printArray(int arr[],  int n){
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	 int arr[8] ={5,6,7,8,9,10,2,3};
	 cout<<"array is : ";
	 printArray(arr,8);
	 cout<<endl;
	 cout<<"pivot eleemnt is present at index :"<<findPivot(arr,0,7)<<endl;
	 
	 int arr2[5] = {7,9,1,2,3};
	 cout<<"array is : ";
	 printArray(arr2,5);
	 cout<<endl;
	 cout<<"pivot eleemnt is present at index :"<<findPivot(arr2,0,4)<<endl;
}
