class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        int i=0,cnt=0,ans=0;
        for(int x=0;x<s.size();x++){
            if(s[x]=='F') cnt++;
            while(cnt>k){
                if(s[i]=='F'){
                    cnt--;
                }
                i++;
            }
            ans=max(ans,x-i+1);
        }
        i=0,cnt=0;
        for(int x=0;x<s.size();x++){
            if(s[x]=='T') cnt++;
            while(cnt>k){
                if(s[i]=='T'){
                    cnt--;
                }
                i++;
            }
            ans=max(ans,x-i+1);
        } return ans;
    }
};