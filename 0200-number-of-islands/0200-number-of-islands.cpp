class Solution {
public:
     void bfs(int i,int j,vector<vector<char>> &grid, vector<vector<int>> &visited ){
        visited[i][j]=1;
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>> q;
        q.push({i,j});
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int x=-1;x<=1;x++){
                for(int y=-1;y<=1;y++){
                    if((x==-1 && y==-1) || (x==1 && y==1) || (x==-1 && y==1) || (x==1 && y==-1))continue;
                    int nr=row+x;
                    int nc=col+y;
                    if( nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]=='1' && !visited[nr][nc]){
                        visited[nr][nc]=1;
                        q.push({nr,nc});
                    }
                }
            }
        }
    }   
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size(),cnt=0;
        int m=grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visited[i][j] && grid[i][j]=='1'){
                    cnt++;
                    bfs(i,j,grid,visited);
                }
            }
        }return cnt;
    }
};