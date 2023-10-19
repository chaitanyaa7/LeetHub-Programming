class Solution {
public:
    bool backspaceCompare(string s, string t) {
       int i=0,j=0,n=s.size(),m=t.size();
       while(i<n){
           if(isalpha(s[i]))i++;
           else if(s[i]=='#' && i==0){
               i++;
               s.erase(i-1,1);
               n=s.size();
               i=0;
           }
           else if(s[i]=='#'&& i!=0){
               i++;
               s.erase(i-2,2);
               n=s.size();
               i=i-2;
           }
       }
        while(j<m){
           if(isalpha(t[j]))j++;
           else if(t[j]=='#' && j==0){
               j++;
               t.erase(j-1,1);
               m=t.size();
               j=0;
           }
           else if(t[j]=='#'&& j!=0){
               j++;
               t.erase(j-2,2);
               m=t.size();
               j=j-2;
           }
       }
       return s==t;

        
    }
};