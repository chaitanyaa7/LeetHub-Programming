class Solution {
public:
    bool isPalindrome(int i,int j,string &str){
        while(i<j){
            if(str[i]!=str[j])return false;
            i++,j--;
        }
        return true;
    }
    int minCut(string str) {
         int n=str.size();
        vector<int> dp(n+1,0);
        for(int i=n-1;i>=0;i--){
            int minicost=INT_MAX;
            for(int j=i;j<n;j++){
                if(isPalindrome(i,j,str)){
                    int cost=1+dp[j+1];
                    minicost=min(minicost,cost);
                 }
        }
         dp[i]=minicost;
        }
        return dp[0]-1;
    }
};