class Solution {
public:
     int f (vector<int> &nums, int k) {
        if(k<0) return 0;
    	int lo=0, hi=0, ans=0, n=nums.size(), cnt=0;
        unordered_map<int,int> arr;
    	while(hi<n) {
    	    arr[nums[hi]]++;
    	    if(arr[nums[hi]]==1) cnt++;
    	    while(cnt>k) {
    	        arr[nums[lo]]--;
    	        if(arr[nums[lo]]==0) cnt--;
    	        lo++;
    	    }
    	    ans += (hi-lo+1);
    	    hi++;
    	}
    	return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return f(nums,k)-f(nums,k-1);
    }
};