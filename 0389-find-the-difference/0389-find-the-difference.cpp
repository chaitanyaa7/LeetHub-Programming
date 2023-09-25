class Solution {
public:
    char findTheDifference(string s, string t) {
        int arr[26]={0};
        for(int i=0;i<s.size();i++){
            arr[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            arr[t[i]-'a']--;
            if(arr[t[i]-'a']==-1)return t[i];
        }
        return '\0';
        

    }
};