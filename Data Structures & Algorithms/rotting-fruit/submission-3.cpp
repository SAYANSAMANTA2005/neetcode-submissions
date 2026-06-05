class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>v(m,vector<int>(n,1e5)),vis(m,vector<int>(n,1e5));
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                    v[i][j]=0;
                    vis[i][j]=1;
                
                }
               // if(grid[i][j]==1)v[i][j]=-1;
            }
        }
        int ans=0;
        int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
        while(!q.empty()){
            auto [x,y]=q.front();q.pop();
            vis[x][y]=1;
            //grid[x][y]=5;
            for(int t=0;t<4;t++){
                int nx=x+dx[t],ny=y+dy[t];
                if(nx>=0 && nx<m && ny>=0 && ny<n && grid[nx][ny]==1 && v[nx][ny]>v[x][y]+1){
                    q.push({nx,ny});
                    //fresh mango
                    //grid[nx][ny]=5;
                    v[nx][ny]=v[x][y]+1;
                    //cout<<v[nx][ny]<<" ";

                 //   ans=max(ans,v[nx][ny]);
                }
            }
        }
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<v[i][j]<<" ";
                if(grid[i][j]==1){
                    if(v[i][j]==1e5)return -1;
                ans=max(v[i][j],ans);
                }
              //  if(v[i][j]==-1) {cnt++;return -1;}
            }
            cout<<endl;
        }
   
        return ans;
    }
};
