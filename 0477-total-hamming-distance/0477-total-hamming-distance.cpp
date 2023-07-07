class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<32;i++){
            int z=0,o=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]&1) o++;
                else z++;
                nums[j] /= 2;
            }
            if(o==nums.size() || z==nums.size()){
                cnt+=0;
            }
            else {
                cnt+= (z*o);
            }
        }
       return cnt;
    }
};