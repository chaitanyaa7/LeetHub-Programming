class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int,pair<int,int>>> q;
        vector<vector<int>> ans;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                int sum=nums1[i]+nums2[j];
                if(q.size()<k) q.push({sum,{nums1[i],nums2[j]}});
            else if(sum<q.top().first){
               q.pop();
               q.push({sum,{nums1[i],nums2[j]}});
            }
            else if(sum>q.top().first){
                break;
            }
            }
        }
        while(k!=0 and !q.empty())
        {
            ans.push_back({q.top().second.first,q.top().second.second});
            q.pop();
            k--;
        }
       return ans;
        
        
        
    }
};