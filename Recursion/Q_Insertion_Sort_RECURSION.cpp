#include <iostream>
using namespace std;
void recursiveInsertionSort(int arr[], int n){
   if (n <= 1)
      return;
   recursiveInsertionSort( arr, n-1 );
   int nth = arr[n-1];
   int j = n-2;
   while (j >= 0 && arr[j] > nth){
      arr[j+1] = arr[j];
      j--;
   }
   arr[j+1] = nth;
  //recursiveInsertionSort( arr, n-1 );
}
int main(){
   int array[] = {34, 7, 12, 90, 51};
   int n = sizeof(array)/sizeof(array[0]);
   printf("Unsorted Array:\t");
      for (int i=0; i < n; i++)
   printf("%d ",array[i]);
      recursiveInsertionSort(array, n);
   cout<<"sorted array :"<<" ";
   for (int i=0; i < n; i++)
      printf("%d ",array[i]);
   return 0;
}