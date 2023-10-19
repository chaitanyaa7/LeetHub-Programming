class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1,s2;
        for(int i=0;i<s.size();i++){
            if(s1.empty() && s[i]=='#')continue;
            if(s[i]!='#')s1.push(s[i]);
            else if(s[i]=='#')s1.pop();
        }
         for(int i=0;i<t.size();i++){
             if(s2.empty() && t[i]=='#')continue;
            if(t[i]!='#')s2.push(t[i]);
            else if(t[i]=='#')s2.pop();
        }

        return s1==s2;
        
    }
};