class Solution {
public:
    string countAndSay(int n) {
        string ans="1";
        
        for(int x=1;x<n;x++){
            string last=ans;
            int n=ans.size();
            int i=0,j=0;
            ans="";
            while(j<n){
                while(last[i]==last[j])j++;
                ans+=to_string(j-i)+last[i];
                i=j;
            }
        }return ans;
    }
};