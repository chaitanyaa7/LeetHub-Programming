class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
         int n=prices.size();
        
        vector<long> curr(2,0),after(2,0);
        
        for(int i=n-1;i>=0;i--){
            for(int buy=0;buy<=1;buy++){
                long profit=0; 
                if(buy){
            curr[buy]=max(-prices[i]+after[0],
                      0+after[1]);
        }
        else{
            curr[buy]=max(prices[i]-fee+after[1],0+after[0]);
        }
                       
            }after=curr;
        } return after[1];
    }
};