class Solution {
public:
vector<vector<char>> grid;
   bool valide(int x,int y,int m,int n,vector<vector<int>>&vis){
    return (x>=0 && y>=0 && x<m && y<n && !vis[x][y] && grid[x][y]=='1');
   }
    int numIslands(vector<vector<char>>& g) {
        grid=g;
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j] && grid[i][j]=='1')
                {
                    cnt++;
 
                queue<pair<int,int>>q;
                q.push({i,j});
                vis[i][j]=1;
                while(!q.empty()){
                    auto it=q.front();
                    q.pop();
                    int x=it.first,y=it.second;
                    vis[x][y]=1;
                    if(valide(x+1,y,m,n,vis))q.push({x+1,y});
                    if(valide(x-1,y,m,n,vis))q.push({x-1,y});
                    if(valide(x,y+1,m,n,vis))q.push({x,y+1});
                    if(valide(x,y-1,m,n,vis))q.push({x,y-1});
                }

            }
            }
        }
        return cnt;
    }
};
