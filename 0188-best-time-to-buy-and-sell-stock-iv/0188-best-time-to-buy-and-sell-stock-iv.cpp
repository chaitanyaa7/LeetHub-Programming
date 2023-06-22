class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        
        vector<vector<long>> curr(2,vector<long>(k+1,0));
        vector<vector<long>> after(2,vector<long>(k+1,0));
        for(int i=n-1;i>=0;i--){
            for(int buy=0;buy<=1;buy++){
                for(int cap=1;cap<=k;cap++){
                    long profit=0;
       
        if(buy){
            curr[buy][cap]=max(-prices[i]+after[0][cap],
                             after[1][cap]);
        }
        else curr[buy][cap]=max(prices[i]+after[1][cap-1],
                         after[0][cap]);
                }
            }
            after=curr;
        }
        return curr[1][k];
    }
};