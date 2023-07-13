class Solution {
public:
    bool canFinish(int V, vector<vector<int>>& prerequisites) {
        vector<int> adj[V];
	    for(auto it:prerequisites){
	        adj[it[1]].push_back(it[0]);
	    }
	    queue<int> q;
	    
	    vector<int> in(V,0);
	    for(int i=0;i<V;i++){
	        for(auto it: adj[i]) in[it]++;
	        
	    }
	    for(int i=0;i<V;i++){
	        if(in[i]==0)q.push(i);
	    }
	   vector<int> ans;
	    while(!q.empty()){
	        int temp=q.front();
	        q.pop();
	        ans.push_back(temp);
	        for(auto it: adj[temp]){
	            in[it]--;
	            if(in[it]==0){
	                q.push(it); 
	        }
	    }
	    }
	     if(ans.size()==V) return true;
	    return false;
    }
};