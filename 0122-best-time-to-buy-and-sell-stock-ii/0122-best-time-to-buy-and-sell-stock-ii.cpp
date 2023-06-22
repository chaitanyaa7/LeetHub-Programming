class Solution {
public:
    long f(int ind,vector<int>& prices,int n, int buy,vector<vector<int>> &dp){
        if(ind==n)return 0;
        if(dp[ind][buy]!=-1)return dp[ind][buy];

        if(buy==1){
             dp[ind][buy]=max((-prices[ind]+f(ind+1,prices,n,0,dp)), f(ind+1,prices,n,1,dp));
        }
        else{
            dp[ind][buy]=max((+prices[ind]+f(ind+1,prices,n,1,dp)), f(ind+1,prices,n,0,dp));
        }
        return dp[ind][buy];
    }   
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
       return f(0,prices,n,1,dp);
    }
};