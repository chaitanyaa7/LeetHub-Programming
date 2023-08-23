class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
	    int m=grid[0].size();
	    vector<vector<int>> visited(n,vector<int>(m,0));
	    vector<vector<int>> dist(n,vector<int>(m,0));
	    queue<pair<pair<int,int>,int>> q;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(grid[i][j]==0){
	                visited[i][j]=1;
	                q.push({{i,j},0});
	            }
	        }
	    }
	    int dr[]={0,-1,0,1};
	    int dc[]={-1,0,1,0};
	    while(!q.empty()){
	        int r=q.front().first.first;
	        int c=q.front().first.second;
	        int steps=q.front().second;
	        dist[r][c]=steps;
	        q.pop();
	        for(int i=0;i<4;i++){
	            int nr=dr[i]+r;
	            int nc=dc[i]+c;
	            if(nr>=0 && nr<n && nc>=0 && nc<m && 
	            grid[nr][nc]==1 && visited[nr][nc]==0){
	                visited[nr][nc]=1;
	                q.push({{nr,nc},steps+1});
	            }
	        }
	    }return dist;
    }
};