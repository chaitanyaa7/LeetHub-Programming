class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
         vector<string> ans;
         int i=0,j=1;
         while(j<=n && i<target.size()){
             int x=target[i];
             if(x==j){
                 ans.push_back("Push");
                 i++;
                 j++;
             }
             else{
                 ans.push_back("Push");
                 ans.push_back("Pop");
                 j++;
             }
         }
         return ans;
    }
};