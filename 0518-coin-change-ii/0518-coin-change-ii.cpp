class Solution {
public:
    int change(int sum, vector<int>& coins) {
        int N=coins.size();
        vector<vector<long>> dp(N,vector<long>(sum+1,0));
        for(int T=0;T<=sum;T++){
            dp[0][T]=(T%coins[0]==0);
        }
        for(int i=1;i<N;i++){
            for(int t=0;t<=sum;t++){
                 long nt=dp[i-1][t];
                 long take=0;
        if(coins[i]<=t)take=dp[i][t-coins[i]];
        dp[i][t]=nt+take;
            }
        }
        return dp[N-1][sum];
    }
};
// vector<vector<long>> dp(n,vector<long>(T+1,0));
//     for(int i=0;i<=T;i++){
//         if(i%arr[0]==0)
//             dp[0][i]=1;
//         // Else condition is automatically fulfilled,
//         // as dp array is initialized to zero
//     }
    
//     for(int ind=1; ind<n;ind++){
//         for(int target=0;target<=T;target++){
//             long notTaken = dp[ind-1][target];
            
//             long taken = 0;
//             if(arr[ind]<=target)
//                 taken = dp[ind][target-arr[ind]];
                
//             dp[ind][target] = notTaken + taken;
//         }
//     }
    
    // return dp[n-1][T];