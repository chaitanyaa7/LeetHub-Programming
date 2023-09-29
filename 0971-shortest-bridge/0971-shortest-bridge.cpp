class Solution {
public:
   void dfs(int r,int c,queue<pair<int,int>>&q,vector<vector<int>>&grid,int n){
        if(r<0 or c<0 or r>=n or c>=n or grid[r][c]==-1)
            return ;
        if(grid[r][c]==0)
            return ;
        q.push({r,c});
        grid[r][c]=-1;
        dfs(r-1,c,q,grid,n);
        dfs(r+1,c,q,grid,n);
        dfs(r,c-1,q,grid,n);
        dfs(r,c+1,q,grid,n);
    }
    
    int shortestBridge(vector<vector<int>>& grid) {
        int ans=0;
        queue<pair<int,int>>    q;
        bool flag=true;
        int n=grid.size();
        for(int i=0;i<n;i++){
            if(flag){
                for(int j=0;j<n;j++){
                    if(grid[i][j]==1){
                        dfs(i,j,q,grid,n);
                        flag=0;
                        break;
                    }
                }
                
            }
        }
        int drow[4]={-1,0,1,0};
        int dcol[4]={0,-1,0,1};
        while(!q.empty()){
          int s=q.size();
          ans++;
          for(int i=0;i<s;i++){
              auto it=q.front();
              int r=it.first;
              int c=it.second;
              q.pop();
            for(int x=0;x<4;x++){
                int nrow=drow[x]+r;
                int ncol=dcol[x]+c;
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<n ){
                   if(grid[nrow][ncol]==0){
                    grid[nrow][ncol]=-1;
                    q.push({nrow,ncol});  
                   }
                   else if(grid[nrow][ncol]==1){
                       return ans-1;
                   }
                }
            }
              
          }  
        }
        return ans-1;

    }
};