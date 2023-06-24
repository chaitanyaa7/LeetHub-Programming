class Solution {
public:
   int n;
    int f(int ind,int val,vector<int>& rods,vector<vector<int>> &dp){
        if(ind>=n){
            if(val==0)return 0;
            return -5001;
        }
        if(dp[ind][val+5000]!=-1)return dp[ind][val+5000];
        int a= rods[ind]+f(ind+1,val+rods[ind],rods,dp);
        int b=f(ind+1,val-rods[ind],rods,dp);
        int c=f(ind+1,val,rods,dp);
        return dp[ind][val+5000]=max(a,max(b,c));
    }   
    int tallestBillboard(vector<int>& rods) {
         n=rods.size();
        vector<vector<int>>dp(21,vector<int>(10005,-1));
        return f(0,0,rods,dp);
    }
};