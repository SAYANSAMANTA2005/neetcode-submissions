class Solution {
public:
vector<vector<int>> grid;
 bool valide(int i,int j,int m,int n){
    return (i>=0 && j>=0 && i<m && j<n && grid[i][j]==1);
 }
int dfs(int i,int j,int m,int n){
    grid[i][j]=2;//visisted cell
    int ans=1;
    if(valide(i+1,j,m,n))
    ans+=dfs(i+1,j,m,n);
    if(valide(i-1,j,m,n))
    ans+=dfs(i-1,j,m,n);
    if(valide(i,j+1,m,n))
    ans+=dfs(i,j+1,m,n);
    if(valide(i,j-1,m,n))
    ans+=dfs(i,j-1,m,n);
    return ans;

}
    int maxAreaOfIsland(vector<vector<int>>& g) {
        grid=g;
        int m=grid.size(),n=grid[0].size();
        int area=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    
                  area=max(area,dfs(i,j,m,n));
                }
            }
        }//
        return area;
    }
};
