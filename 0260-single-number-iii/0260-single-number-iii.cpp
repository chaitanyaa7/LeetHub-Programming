class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int x=0;
        for(auto it:nums){
         x=x^it;
        }
        int pos = 1;
        while(true){
            if(x&pos)break;
            else pos=pos<<1;
        }

        int a=0;
        for(auto it:nums){
            if((pos&it)==0)a=a^it;
        }
        int b=a^x;
        return {a,b};
    }
};