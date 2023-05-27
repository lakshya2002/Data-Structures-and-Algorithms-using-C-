#include <iostream>
#include <vector>
using namespace std;

vector<int> intersection(vector<int>& arr1,int n,vector<int>& arr2,int m){
	vector<int> ans;
	int i=0;
    int j=0;
	while(i<n && j<m){
		if(arr1[i]<arr2[j]){
			i++;
		}
		else if(arr1[i]==arr2[j]){
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
		else if(arr1[i]>arr2[j]){
			j++;
		}
	}
	return ans;
}
int main(){
	vector<int> arr1;
    vector<int> arr2;
    arr1 = {0,1,2,3,7};
	arr2 = {1,2,2,4};	
    vector<int> ans= intersection(arr1, 5, arr2, 4);
    for(int st: ans){
        cout<<st<<endl;
    }
    
    return 0;
}

