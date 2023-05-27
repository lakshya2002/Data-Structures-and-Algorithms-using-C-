#include<iostream>
#include<algorithm>
using namespace std;
bool uniqueOcuur(int arr[],int n){
	int arr2[100]={0};
	int i=0;
	while(i<n){
	int count=1;
	for (int j=i+1;j<arr.size();j++){
		cout<<" ";
	}
		
	}
	for (int i=0;i<n;i++){
		for(int j=i+1;j<n,j++){
			if (arr[i]==arr[j]){
				count++;
			}else{
				j++;
			}
			arr2[i]=count;			
		}
	}
	for(int i=0;k<100;k++){
		
	}
}
int main(){	
}
