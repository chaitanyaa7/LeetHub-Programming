class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        if(words.size()!=s.size())return false;
        string a="";
        for(int i=0;i<words.size();i++){
            a+=words[i][0];
        }
        return a==s;
    }
};