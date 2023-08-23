class Solution {
public:
     void dfs(int node,vector<int> adjj[],vector<int> &visited){
        visited[node]=1;
        for(auto it: adjj[node]){
            if(!visited[it]){
                dfs(it,adjj,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& adj) {
        int V=adj.size();
        vector<int> adjj[V];
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(adj[i][j]==1 && i!=j){
                    adjj[i].push_back(j);
                }
            }
        }
        
       vector<int> visited(V,0);
        int cnt=0;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                cnt++;
                dfs(i,adjj,visited);
            }
        }
        return cnt;
    }
};