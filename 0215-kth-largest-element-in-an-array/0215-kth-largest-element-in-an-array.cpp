class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
       
        int n=arr.size();
         priority_queue<int,vector<int>,greater<int>> pq;
        
        for(int i=0;i<k;i++)pq.push(arr[i]);
        
        for(int i=k;i<n;i++){
            if(arr[i]>pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        int ans=pq.top();
        return ans;

    }
};