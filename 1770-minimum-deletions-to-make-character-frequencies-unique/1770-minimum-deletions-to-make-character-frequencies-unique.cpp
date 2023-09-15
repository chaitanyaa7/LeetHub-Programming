class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        unordered_set<int> st;
        int mini=0;
        for(auto it:mp){
            int temp=it.second;
            
            while(temp>0 && st.find(temp)!=st.end()){
                mini++;
                temp--;
            }
            if(temp!=0)st.insert(temp);
            
        }return mini;

    }
};