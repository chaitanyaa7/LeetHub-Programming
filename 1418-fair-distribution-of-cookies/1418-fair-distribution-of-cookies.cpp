class Solution {
public:
   int solve(vector<int>&c,int i, vector<int> &arr){
        if(i==c.size()){
            int ans=INT_MIN;
            for(int i=0;i<arr.size();i++){
                ans=max(ans,arr[i]);
                
            }return ans;
        }
        int m=INT_MAX;
        for(int j=0;j<arr.size();j++){
            arr[j]+=c[i];
            m=min(m,solve(c,i+1,arr));
            arr[j]-=c[i];
        } return m;
    }
    int distributeCookies(vector<int>& c, int k) {
        
        vector<int> arr(k,0);
        return solve(c,0,arr);
    }
};