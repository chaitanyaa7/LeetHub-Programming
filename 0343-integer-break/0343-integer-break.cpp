class Solution {
public:
    int integerBreak(int n) {
        vector<int> dp(100);
        dp[1]=1;
        dp[2]=1;
        dp[3]=2;
        for(int i=4;i<=n;i++){
            
            for(int j=1;j<=i;j++){
                
                int y=i-j;
                dp[i]=max({dp[i],j*y,j*dp[y],dp[j]*y,dp[j]*dp[y]});
            }
        }
        return dp[n];
    }
};