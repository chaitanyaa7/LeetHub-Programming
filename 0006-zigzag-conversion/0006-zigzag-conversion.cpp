class Solution {
public:
    string convert(string s, int n) {
        if(n==1)return s;
        vector<string> ans(n);
        bool flag=false;
        int j=0;
        for(int i=0;i<s.size();i++){
            ans[j]+=s[i];
            if(j==0 || j==n-1) flag=!flag;
            if(flag){
              j++;
            }
            else j--;
        }
        string a="";
        for(auto it: ans){
            a+=it;
        }return a;
    }
};