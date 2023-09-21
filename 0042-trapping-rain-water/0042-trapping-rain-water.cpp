class Solution {
public:
    int trap(vector<int>& a) {
        int n=a.size();
        int l=0,r=n-1;
        int lm=0,rm=0,ans=0;
        while(l<=r){
            if(a[l]<=a[r]){
                if(a[l]>=lm)lm=a[l];
                else{
                    ans+=lm-a[l];
                }
                l++;
            }
            else{
                if(a[r]>=rm)rm=a[r];
                else{
                    ans+=rm-a[r];
                }
                r--;
            }
        }
        return ans;
    }
};