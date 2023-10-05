class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size(),n1=-1,n2=-1,cnt=0,cntt=0;
        for(int i=0;i<n;i++){
            if(n1==nums[i])cnt++;
            else if(n2==nums[i])cntt++;
            else if(cnt==0){
                n1=nums[i];
                cnt=1;
            }
            else if(cntt==0){
                n2=nums[i];
                cntt=1;
            }
            else{
                cnt--;
                cntt--;
            }

        }
        cnt=0,cntt=0;
        for(int i=0;i<n;i++){
             if(n1==nums[i])cnt++;
             else if(n2==nums[i])cntt++;
        }
        if(cnt>(n/3))ans.push_back(n1);
        if(cntt>(n/3))ans.push_back(n2);
        return ans;
    }
};