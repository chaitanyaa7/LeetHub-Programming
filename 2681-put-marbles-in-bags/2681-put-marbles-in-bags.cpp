class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        vector<long long> ans;
        long long n=weights.size();
        for(int i=0;i<n-1;i++){
            ans.push_back(weights[i]+weights[i+1]);
        }
        sort(ans.begin(),ans.end());
        long long maxi=0,mini=0;
        for(int i=0;i<k-1;i++){
             mini+=ans[i];
             maxi+=ans[n-i-2];
        }return maxi-mini;
    }
};