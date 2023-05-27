#include <iostream>
using namespace std;
int merge(long long *arr, int s, int e) {
    int invcount = 0;
    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    //merge 2 sorted arrays     
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = (int) s;
	
    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        
        else{//right wala part chotta hai
        	invcount += (len1-index1);
            arr[mainArrayIndex++] = second[index2++];
//            invcount +=(mid-index1+1);
//			invcount += len1-index1;
        }
    }   

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }
    return invcount;
    delete []first;
    delete []second;
//    cout<<invcount;
    

}

int mergeSort(long long *arr, int s, int e) {
	int count = 0;
    //base case
    if(s >= e) {
        return count;
    }
    
    int mid = (s+e)/2;
	
	
    //left part sort karna h 
    count+=mergeSort(arr, s, mid);
    
    //right part sort karna h 
    count+=mergeSort(arr, mid+1, e);

    //merge
    count+=merge(arr, s, e);
//    cout<<count;
	return count;
}
long long getInversions(long long *arr, int n){
    return mergeSort(arr, 0, n-1);
}

int main() {

    long long arr[5] = {2,5,1,3,4};
    int n = 5;

    mergeSort(arr, 0, n-1);
    long long inv = getInversions(arr,n);
	cout<< "Inversion Count : "<<inv<<endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;

	cout<< "Inversion Count : "<<inv<<endl;
    return 0;
}
