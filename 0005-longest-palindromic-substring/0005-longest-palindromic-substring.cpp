class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        vector<vector<bool>> dp(n,vector<bool>(n,0));
        int maxi=1;
        int start=0;
        for(int i=0;i<n;i++){
            dp[i][i]=1;
        }
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                maxi=2;
                start=i;
                dp[i][i+1]=1;
            }
        }
        for(int k=3;k<=n;k++){
            for(int i=0;i<n-k+1;i++){
                int j=i+k-1;
                if(s[i]==s[j] && dp[i+1][j-1]){
                    dp[i][j]=1;
                    if(k>maxi){
                        maxi=k;
                        start=i;
                    }
                }
            }
        }
        string ans=s.substr(start,maxi);
        return ans;
    }
};