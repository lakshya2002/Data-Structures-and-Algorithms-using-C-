 #include<iostream>
 using namespace std;
 
 int partition(int arr[], int s, int e){
 	int pivot = arr[s];
 	
 	// count the no. of ele lesss than pivot
 	int count = 0;
 	for(int i = s+1;i<=e;i++){
 		if(arr[i]<=pivot){
 			count++;
		 }
	 }
	
	//place pivot to its right place 
	int pivotindx = s+count;
	swap(arr[s],arr[pivotindx]);
	
	//
	int i = s;
	int j = e;
	while(i<pivotindx&&j>pivotindx){
		while (arr[i]<=pivot){
			i++;
		}
		while (arr[j]>pivot){
			j--;
		}
		if(i<pivotindx&&j<pivotindx){
			swap(arr[i++],arr[j--]);
		}
	}
	  return pivotindx;
 }
 void quickSort(int *arr, int s, int e){
 	//base case
 	if(s>=e){
 		return ;
	 }
	
	int p = partition(arr,s,e);
	//left part
	quickSort(arr,s,p-1);
	//right part 
	quickSort(arr,p+1,e);
	 
 }
 int main(){
 	int arr[5] = {4, 2, 5, 1, 3};
 	int n = 5;
 	quickSort(arr,0,n-1);
 	//printArray(arr,n);
 	for (int i =0; i<n;i++){
 		cout<<arr[i]<<" ";
	 }
 }
 
