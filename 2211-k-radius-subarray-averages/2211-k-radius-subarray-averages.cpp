class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        
        int n = nums.size(),length=2*k+1;
        vector<int> ans(n,-1);
       if (length > n)
        return ans;
       long long int sum=0;
        for(int i=0;i<length;i++){
           sum+=nums[i];
        }
        ans[k]=(int)(sum/length);
        int start=0;
        for(int last =length;last<n;last++){
            sum=sum-nums[start++]+nums[last];
            ans[++k]=int(sum/length);
        }
        return ans;
    }
};