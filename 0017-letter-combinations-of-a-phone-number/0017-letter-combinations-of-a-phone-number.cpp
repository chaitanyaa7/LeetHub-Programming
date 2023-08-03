class Solution {
public:
    void f(int ix,string &temp,string &digits,vector<string> &ans,vector<string> &m){
        if(ix==digits.length()){
            if(temp.length())ans.push_back(temp);
            return;
        }
        int ind=digits[ix]-'0';
        string s=m[ind];
        for(int i=0;i<s.length();i++){
            temp.push_back(s[i]);
            f(ix+1,temp,digits,ans,m);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        string temp;
        vector<string> ans;
        vector<string> m={"","","abc","def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};  
        f(0,temp,digits,ans,m);
        return ans;
    }
};