#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size, int key){
	//base case
	if(size==0){
		return false;
	}
	if(arr[0]==key){
		return true;
	}
	else{
		return linearSearch(arr+1,size-1,key);
	}
		
}
int main(){
	
	int arr[5]={3,2,5,1,6};
	bool ans = linearSearch(arr,5,5);
	if(ans){
		cout<<"present"<<endl;
	}
	else{
		cout<<"absent"<<endl;
	}
}

