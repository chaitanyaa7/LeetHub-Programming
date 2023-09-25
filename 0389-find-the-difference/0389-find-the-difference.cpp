class Solution {
public:
    char findTheDifference(string s, string t) {
       char ans=0;
       for(auto it:s+t){
           ans^=it;
       }
       return ans;
        

    }
};