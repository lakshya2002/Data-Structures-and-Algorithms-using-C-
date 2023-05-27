#include <iostream>
#include <vector>
using namespace std;

vector<int> pairsum(vector<int>&arr,int s){
    vector<int> ans;
    vector<int> temp;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==s){
                // vector<int> temp;
                ans.push_back(min(arr[i],arr[j]));
                ans.push_back(max(arr[i],arr[j]));
                // ans.push_back(temp);
            }
        }
    }
    // sort(ans.begin(),ans.end());    
    return ans;
    
}
int main(){
	vector<int> arr1;
    vector<int> arr2;
    arr1 = {0,1,2,3,7};
// 	arr2 = {1,2,2,4};	
    vector<int> ans= pairsum(arr1, 8);
    for(int st: ans){
        cout<<st<<" ";
    }

}

