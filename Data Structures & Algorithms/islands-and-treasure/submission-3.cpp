class Solution {
public:
bool valide(int i,int j,int m,int n,vector<vector<int>>& grid){
  return (i>=0 && j>=0 && i<m && j<n && grid[i][j]==INT_MAX);
}
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();

        queue<pair<int,int>> q;
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           if(grid[i][j]==0)q.push({i,j});
        }
       }//
       int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
       while(!q.empty()){
        auto [x,y]=q.front();
        q.pop();
        for(int t=0;t<4;t++){
            int nx=x+dx[t],ny=y+dy[t];
            if(valide(nx,ny,m,n,grid)){
                grid[nx][ny]=grid[x][y]+1;
                q.push({nx,ny});
            }
        }
       }
       
    }
};