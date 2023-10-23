class Solution {
public:
    int f(int ind,int prev,vector<int> &nums,int n,vector<vector<int>> &dp){
       if(ind==n)return 0;
       if(dp[ind][prev+1]!=-1)return dp[ind][prev+1];
       int len= 0 + f(ind+1,prev,nums,n,dp);
       if(prev==-1 || nums[ind]>nums[prev] )len=max(len,1+ f(ind+1,ind,nums,n,dp));
       return dp[ind][prev+1]=len;
    }
    int lengthOfLIS(vector<int>& a) {
        int n=a.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
       for(int i=n-1;i>=0;i--){
           for(int j=i-1;j>=-1;j--){
                int len=0+dp[i+1][j+1];
                if(i==0 || j==-1 || a[i]>a[j]){
                     len=max(len,1+dp[i+1][i+1]);
                }
                dp[i][j+1]=len;
           }
       }
       return dp[0][-1+1];
    }
};