class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,n=nums.size(),cnt=0,ans=INT_MIN;
        while(r<n){
            if(nums[r]==0)cnt++;
            while(cnt>k){
                if(nums[l]==0){
                    cnt--;
                }
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};