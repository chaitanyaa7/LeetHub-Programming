class Solution {
public:
    int f(int n,vector<int> &coins,int amount,vector<vector<int>> &dp){
        if(n==0){
            if(amount%coins[0]==0)return amount/coins[0];
            else return 1e9;
        }
        if(dp[n][amount]!=-1)return dp[n][amount];
        int nt=f(n-1,coins,amount,dp);
        int t=1e9;
        if(coins[n]<=amount){
            t=1+f(n,coins,amount-coins[n],dp);
        }
        return dp[n][amount]=min(t,nt);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        int ans= f(n-1,coins,amount,dp);
        if(ans>=1e9)return -1;
        return ans;
    }
};