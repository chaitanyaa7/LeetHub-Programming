class Solution {
public:
    string smallestSubsequence(string s) {
        vector<bool> visi(26,false);
        stack<char> st;
        vector<int> freq(26);
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }
        for(int i=0;i<s.size();i++){
            char c=s[i];
            freq[c-'a']--;
            if(visi[c-'a']) continue;
            while(!st.empty() && st.top()>c && freq[st.top()-'a']>0){
                visi[st.top()-'a']=false;
                st.pop();
            }
            visi[c-'a']=1;
            st.push(c);
        }
        string ans="";
        while(!st.empty()){
            
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};