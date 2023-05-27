// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void selectionSort(int *arr , int n){
     if(n==0||n==1){
         return ;
     }
     for(int i=0;i<n-1;i++){
         int minindex= i;
         if(arr[i]>arr[i+1]){
             minindex = i+1;
         }
         swap(arr[minindex],arr[i]);
     }
     
     selectionSort(arr,n-1);
 }
 int printArray(int arr[], int n){
     for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
 }
int main() {
    // Write C++ code here
    int arr[5]={64,25,12,22,11};
    cout<<"before :"<<printArray(arr,5);
    selectionSort(arr,5);
    cout<<endl;
    cout<<"after :"<<printArray(arr,5);

    return 0;
}
