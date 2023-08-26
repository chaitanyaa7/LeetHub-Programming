class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        vector<vector<int>> adj[n+1];
        for(int i=0;i<times.size();i++){
                  int u=times[i][0];
                  int v=times[i][1];
                  int w=times[i][2];    
                  adj[u].push_back({v,w});
            }
        
        priority_queue< pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>> > pq;
        pq.push({0,k});
        vector<int>dist(n+1,1e9);
        dist[k]=0,dist[0]=0;

        while(!pq.empty()){
            auto it= pq.top();
            pq.pop();
            int node=it.second;
            int cost=it.first;

            for(auto itr: adj[node]){
                 int adjN=itr[0];
            int adjW=itr[1];
             if(cost+adjW < dist[adjN]){
                 dist[adjN]=cost+adjW;
                 pq.push({cost+adjW,adjN});
             }
            }
        }

        int ans=-1;
        for(int i=0;i<n+1;i++){
            if(dist[i]==1e9)return -1;
            ans=max(ans,dist[i]);
        }
        return ans;
    }
};