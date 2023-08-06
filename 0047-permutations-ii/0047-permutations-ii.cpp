class Solution {
public:
     void f(int i,set<vector<int>> &ans,vector<int> &nums){
        if(i==nums.size()){
            ans.insert(nums);
            return;
        }
        for(int x=i;x<nums.size();x++){
            swap(nums[i],nums[x]);
            f(i+1,ans,nums);
            swap(nums[i],nums[x]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
set<vector<int>> ans;
f(0,ans,nums);
return vector<vector<int>>(ans.begin(),ans.end());
    }
};