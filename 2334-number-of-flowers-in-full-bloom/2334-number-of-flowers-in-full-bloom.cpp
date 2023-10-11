class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<int> s, e;
        for (auto& t : flowers)
            s.push_back(t[0]), e.push_back(t[1]);
        vector<int> ans;
        sort(s.begin(),s.end());
        sort(e.begin(),e.end());
        for(int t:people){
            int started=upper_bound(s.begin(),s.end(),t)-s.begin();
            int ended=lower_bound(e.begin(),e.end(),t)-e.begin();
            ans.push_back(started-ended);
        }return ans;
    }
};
