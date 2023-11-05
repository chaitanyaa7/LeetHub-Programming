class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int ans=0,cnt=1,n=arr.size();
        if(arr[0]>arr[1])ans=arr[0];
        else ans=arr[1];
        if(cnt==k)return ans;
        for(int i=2;i<n;i++){
            if(cnt==k)return ans;
            if(arr[i]>ans){
                cnt=1;
                ans=arr[i];
            }
            else cnt++;
        }
        return ans;
    }
};