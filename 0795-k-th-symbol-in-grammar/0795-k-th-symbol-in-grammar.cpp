class Solution {
public:
    int kthGrammar(int n, int k) {
        int curr=0;
        int l=1,r=pow(2,n-1);
        for(int i=0;i<(n-1);i++){
            int mid=(l+r)/2;
            if(k<=mid){
                r=mid;
            }
            else{
                l=mid+1;
                if(curr==0)curr=1;
                else if(curr==1)curr=0;
            }
        }
        return curr;
        
        
    }
};