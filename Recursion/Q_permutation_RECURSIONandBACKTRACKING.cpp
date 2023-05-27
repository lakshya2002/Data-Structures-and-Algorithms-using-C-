class Solution {
private:
    void solve(vector<int> num, int index, vector<vector<int> >& ans){
        //base case
        if(index>=num.size()){
            ans.push_back(num);
            return ;
        }

        for(int j = index; j<num.size();j++){
            swap(num[index],num[j]);
            solve(num,index+1,ans);
            //backtrack
            swap(num[index],num[j]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums,index,ans);
        return ans;
    }
};
