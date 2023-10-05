class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       
        int n=nums.size();
        priority_queue<int> pq(nums.begin(), nums.end());

        if(k==1)return pq.top();
        k--;
        while(k--){
            pq.pop();
        }
        return pq.top();

    }
};