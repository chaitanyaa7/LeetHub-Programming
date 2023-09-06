class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int ss=s.size();
        int pp=p.size();
        if(pp>ss)return {};
        vector<int> a(26,0);
        vector<int> b(26,0);

        for(int i=0;i<pp;i++){
            a[p[i]-'a']++;
            b[s[i]-'a']++;
        }
        vector<int> ans;
        if(a==b)ans.push_back(0);

        for(int i=pp;i<ss;i++){
            b[s[i-pp]-'a']--;
            b[s[i]-'a']++;
            if(a==b)ans.push_back(i-pp+1);
        }return ans;
    }
};