class Solution {
public:
    int f(int i,vector<int> &dp){
        if(i==0||i==1)return 1;
        if(dp[i]!=-1)return dp[i];
        return dp[i]=f(i-1,dp)+f(i-2,dp);
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        dp[0]=dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};