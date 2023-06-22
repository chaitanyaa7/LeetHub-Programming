class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int mini=INT_MAX, prof=0;
    for(int i=0;i<prices.size();i++){
        prof=max(prof,prices[i]-mini);
        mini=min(mini,prices[i]);
    }
    return prof;
    }
};