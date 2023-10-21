class Solution {
public:
    int f(int i,int n,vector<int> &nums,vector<int> &dp){
        if(i>=n-1)return 0;
        if(dp[i]!=-1)return dp[i];

         int ans=1e5;
         for(int j=1;j<=nums[i];j++){
             ans=min(ans,1+f(i+j,n,nums,dp));
         }
         return dp[i]=ans;

    }
    int jump(vector<int>& arr) {
        int n=arr.size();
         if(n==1)return 0;
        
        int coverage=0;
        int mini=0;
        int last=0;
        int destination=n-1;
        for(int i=0;i<n;i++){
            coverage=max(coverage,i+arr[i]);
            if(i==last){
                mini++;
                last=coverage;
            }
            if(last>=destination)return mini;
        }
        return mini;
    }
};