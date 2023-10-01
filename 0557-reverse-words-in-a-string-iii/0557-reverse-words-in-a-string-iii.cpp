class Solution {
public:
    string reverseWords(string s) {
          vector<char> t;
        string ans="";
        for (char c : s){
            if (c==' '){//All the words in s are separated by a single space.
                ans+=string(t.rbegin(), t.rend())+' ';
                t.clear();
            }
            else t.push_back(c);
       }
       ans+=string(t.rbegin(), t.rend());
       return ans;
    }
};