class Solution {
public:
int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
vector<vector<int>>dp;
   int solve(int x,int y,vector<vector<int>>& matrix){
    int m=matrix.size(),n=matrix[0].size();
    if(dp[x][y]!=-1)return dp[x][y];
    int ans=1;
  for(int t=0;t<4;t++){
    int nx=x+dx[t],ny=y+dy[t];
    if(nx>=0 && ny>=0 && nx<m && ny<n && matrix[nx][ny]>matrix[x][y]){
    ans=max(ans,1+solve(nx,ny,matrix));
    }
  }
    

   return dp[x][y]=ans;
   }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
         int m=matrix.size(),n=matrix[0].size();
        int ans=0;
        dp.resize(m,vector<int>(n,-1));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans=max(ans,solve(i,j,matrix));
            }
        }
        return ans;
    }
};
/*
  i,j  --> ni,nj
  if(mat[i][j]<mat[ni][nj])dp[ni][nj]=1+dp[i][j];

*/
