class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()<=2)return true;
        bool inc=1,decr=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1])decr=0;
            else if(nums[i]<nums[i-1])inc=0;
            if(!inc && !decr)return 0;
            }
        
        return true;
    }
};