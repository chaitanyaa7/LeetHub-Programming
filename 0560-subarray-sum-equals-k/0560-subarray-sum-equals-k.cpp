class Solution {
public:
    int subarraySum(vector<int>& arr, int s) {
       unordered_map<int,int> mp;
       mp[0]=1;
       int ans=0,sum=0;
       for(auto it : arr){
           sum+=it;
           int a=sum-s;
           if(mp.find(a)!=mp.end())ans+=mp[a];
           mp[sum]++;
       }return ans;
    }
};