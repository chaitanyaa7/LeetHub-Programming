class Solution {
public:
    void f(int i,vector<vector<int>> &ans,vector<int> &nums){
        if(i==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int x=i;x<nums.size();x++){
            swap(nums[i],nums[x]);
            f(i+1,ans,nums);
            swap(nums[i],nums[x]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        f(0,ans,nums);
        return ans;
    }
};