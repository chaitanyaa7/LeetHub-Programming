class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        if(k==1)return pq.top();
        k--;
        while(k--){
            pq.pop();
        }
        return pq.top();

    }
};