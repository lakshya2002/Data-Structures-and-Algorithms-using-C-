#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
    void solve(vector<int>nums, vector<int>output, int index, vector<vector<int>  >&ans){
        if(index>=nums.size()){
            ans.push_back(output);
            return ;
        }
        //exclude
        solve(nums, output, index+1,ans);
        //include
        int ele = nums[index];
        output.push_back(ele);
        solve(nums,output,index+1,ans);
    }
public:
    vector<vector<int> > subsets(vector<int>& nums) {
        vector<vector<int> > ans;
        vector<int> output;
        int index = 0;
        solve(nums,output,index,ans);
        return ans;
    }
};

int main(){
    vector<int> array = { 1, 2, 3 };
	vector<vector<int> > res = Solution::subsets(arr[3]);
	for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
//	for(int i=arr.begin();i<arr.end();i++){
//		cout<<arr[i]<<" ";
//	}
}
