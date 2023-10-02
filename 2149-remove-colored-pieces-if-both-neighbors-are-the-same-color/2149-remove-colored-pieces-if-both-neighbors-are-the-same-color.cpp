class Solution {
public:
    bool winnerOfGame(string colors) {
        int i=0,n=colors.size();
        int a=0,b=0;
        while(i<n){
            int a1=0,b1=0;
            while(i<n && colors[i]=='A'){
                a1++;
                i++;
            }
            while(i<n && colors[i]=='B'){
                i++;
                b1++;
            }
            if(a1>2)a+=(a1-2);
            if(b1>2)b+=(b1-2);
        }
        return a>b;
    }
};