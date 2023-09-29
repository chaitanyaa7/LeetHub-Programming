class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
         int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> visi(n,vector<int>(m,0));
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || j==0 || i==n-1 || j==m-1){
                   if(grid[i][j]==1){
                     q.push({i,j});
                    visi[i][j]=1;  
                   } 
                }
            }
        }
        
        int drow[4]={-1,0,1,0};
        int dcol[4]={0,1,0,-1};
        
        while(!q.empty()){
            auto it=q.front();
            int r=it.first;
            int c=it.second;
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=drow[i]+r;
                int ncol=dcol[i]+c;
                
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !visi[nrow][ncol] && grid[nrow][ncol]==1){
                    q.push({nrow,ncol});
                    visi[nrow][ncol]=1;
                }
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(visi[i][j]==0 && grid[i][j]==1 ){
                    cnt++;
                }
            }
        }return cnt;
    }
};