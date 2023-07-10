class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i=0,j=0;
        for(auto it:nums)i+=it;
        for(int x=0;x<nums.size();x++){
            i-=nums[x];
            if(i==j)return x;
            j+=nums[x];
        }return -1;
    }
};