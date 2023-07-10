class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int i=0,j=0,n=nums.size();
        for(auto it:nums){
            i+=it;
        }
        for(int x=0;x<n;x++){
            i-=nums[x];
            if(i==j)return x;
            j+=nums[x];
        }return -1;
    }
};