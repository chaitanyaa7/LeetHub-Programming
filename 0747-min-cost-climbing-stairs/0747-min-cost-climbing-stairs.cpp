class Solution {
public:
    int f(int i,vector<int> &cost,vector<int> &dp){
        if(i==0)return cost[0];
        if(i==1)return cost[1];
        if(dp[i]!=-1)return dp[i];
        int take=cost[i]+min(f(i-1,cost,dp),f(i-2,cost,dp));
        return dp[i]=take;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();       
        vector<int> dp(n,-1);
        return min(f(n-1,cost,dp),f(n-2,cost,dp));

    }
};