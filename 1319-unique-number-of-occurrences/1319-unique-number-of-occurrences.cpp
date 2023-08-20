class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int> ans;
        int i=0;
        while(i<arr.size()){
            int cnt=1;
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]==arr[i]){
                    cnt++;
                }
            }
            ans.push_back(cnt);
            i+=cnt;
        }
         sort(ans.begin(),ans.end());
        for(int i=1;i<ans.size();i++){
            if(ans[i]==ans[i-1])return false;
        }return true;
    }
};