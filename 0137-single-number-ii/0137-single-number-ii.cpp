class Solution {
public:
    int singleNumber(vector<int>& arr) {
       int a=0,b=0,N=arr.size();
        for(int i=0;i<N;i++){
            a=(a^arr[i]) & ~(b);
            b=(b^arr[i]) & ~(a);
        }
        return a; 
    }
};