#include<iostream>
using namespace std;
int intersection(int arr1[],int arr2[],int n,int m){
	for(int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			//if (arr1[i]<arr2[j]){
			//	break;
			//}
			if(arr1[i]==arr2[j]){
				cout<<arr2[j];
				arr2[j]=INT_MIN;
				break;
			}
		}
	}

}
int main(){
	int arr[5]={1,2,3,3};
	int arr1[2]={3,5};
	intersection(arr,arr1,5,2);
}
