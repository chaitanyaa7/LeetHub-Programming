class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<int,vector<int>,greater<int>> q1,q2;
        long long int sum=0,i=0,j=costs.size()-1,cnt=0;
        while(cnt<k){
            while(i<=j&& q1.size()<candidates)q1.push(costs[i++]);
            while(j>=i && q2.size()<candidates) q2.push(costs[j--]);
            int a=q1.size()>0?q1.top():INT_MAX;
            int b=q2.size()>0?q2.top():INT_MAX;
            if(a<=b){
                sum+=a;
                q1.pop();
            }
            else{
                sum+=b;
                q2.pop();
            }
            cnt++;
        }
        return sum;
    }
};