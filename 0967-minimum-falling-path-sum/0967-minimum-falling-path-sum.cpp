class Solution {
public:
     int f(int i,int j,int n,vector<vector<int>> &matrix,vector<vector<int>>& dp){
        if(j<0 || j>=n)return 1e8;
        if(i==0)return matrix[i][j];
        if(dp[i][j]!=-1)return dp[i][j];
        int left=matrix[i][j]+ f(i-1,j-1,n,matrix,dp);
        int up=matrix[i][j]+ f(i-1,j,n,matrix,dp);
        int right=matrix[i][j]+ f(i-1,j+1,n,matrix,dp);
        return dp[i][j]=min(left,min(up,right));
    }
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
         int maxi=1e8;
         vector<vector<int>> dp(n,vector<int>(n,0));
         for(int i=0;i<n;i++) dp[0][i]=matrix[0][i];
         for(int i=1;i<n;i++){
             for(int j=0;j<n;j++){
                    int left=matrix[i][j];
                    if(j-1>=0)left+= dp[i-1][j-1];
                    else left+=1e8;
                    int up=matrix[i][j]+ dp[i-1][j];
                    int right=matrix[i][j];
                    if(j+1<n)right+= dp[i-1][j+1];
                    else right+=1e8;
                    dp[i][j]=min(left,min(up,right));
             }
         }
        for(int i=0;i<n;i++){
            maxi=min(dp[n-1][i],maxi);
        }
        
        return maxi;
    }
};