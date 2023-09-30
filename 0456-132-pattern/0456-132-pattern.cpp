class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int> st;
        if(nums.size()<3)return false;
        int t=INT_MIN;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<t)return true;
            while(!st.empty() && st.top()<nums[i]){
                t=st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};