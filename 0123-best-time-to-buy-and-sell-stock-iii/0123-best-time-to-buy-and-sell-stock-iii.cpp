class Solution {
public:
    long f(int ind,int buy,int cap, int n,vector<vector<vector<int>>> &dp,vector<int>& prices){
        if(ind==n || cap==0) return 0;
        if(dp[ind][buy][cap]!=-1)return dp[ind][buy][cap];
        if(buy){
             dp[ind][buy][cap]=max(-prices[ind]+f(ind+1,0,cap,n,dp,prices), f(ind+1,1,cap,n,dp,prices));
        }
        else{
            dp[ind][buy][cap]=max(+prices[ind]+f(ind+1,1,cap-1,n,dp,prices),f(ind+1,0,cap,n,dp,prices));
        }

        return dp[ind][buy][cap];
    }   
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
       return f(0,1,2,n,dp,prices);
    }
};