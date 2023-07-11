class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n=matrix.size(),m=matrix[0].size();
        int l=0,t=0,b=n-1,r=m-1;
        int x=0;
        while(l<=r && t<=b){
           if(x==0){
                for(int i=l;i<=r;i++){
                    ans.push_back(matrix[t][i]);
                }t++;
           }
           else if(x==1){
                for(int i=t;i<=b;i++){
                    ans.push_back(matrix[i][r]);
                }r--;
           }
           else if(x==2){
                 for(int i=r;i>=l;i--){
                     ans.push_back(matrix[b][i]);
                 }b--;
           }
           else if(x==3){
                for(int i=b;i>=t;i--){
                    ans.push_back(matrix[i][l]);
                }l++;
           }
           x=(x+1)%4;
        } return ans;
    }
};