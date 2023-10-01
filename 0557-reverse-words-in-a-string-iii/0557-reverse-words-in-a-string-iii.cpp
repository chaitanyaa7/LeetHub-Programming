class Solution {
public:
    string reverseWords(string s) {
           string a="",ans;
           for(auto ch:s){
               if(ch!=' ')a+=ch;
               else{
                   reverse(a.begin(),a.end());
                   ans+=a+" ";
                   a="";
               }
           } 
           reverse(a.begin(),a.end());
           ans+=a;
           return ans;
    }
};