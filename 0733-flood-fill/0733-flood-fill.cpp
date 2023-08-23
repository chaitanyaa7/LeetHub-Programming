class Solution {
public:
    void dfs(vector<vector<int>>& image,vector<vector<int>>& ans,
    int sr,int sc,int delr[],int delc[],int newColor,int ini){
        ans[sr][sc]=newColor;
        int n=image.size();
        int m=image[0].size();
        for(int i=0;i<4;i++){
              int newr=delr[i]+sr;
                int newc=delc[i]+sc;
                if(newr>=0 && newr<n && newc>=0 && newc<m && ans[newr][newc]!=newColor && image[newr][newc]==ini){
                    dfs(image,ans,newr,newc,delr,delc,newColor,ini);
                }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>>& ans=image;
        int delr[]={-1,0,1,0};
        int delc[]={0,1,0,-1};
        int ini=image[sr][sc];
        dfs(image,ans,sr,sc,delr,delc,color,ini);
        return ans;
    }
};