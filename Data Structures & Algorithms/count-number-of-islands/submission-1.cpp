class Solution {
public:
vector<vector<char>> grid;
   bool valide(int x,int y,int m,int n){
    return (x>=0 && y>=0 && x<m && y<n  && grid[x][y]=='1');
   }
    int numIslands(vector<vector<char>>& g) {
        grid=g;
        int m=grid.size(),n=grid[0].size();
      //  vector<vector<int>(m,vector<int>(n,0));
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1')
                {
                    grid[i][j]='2';
                    cnt++;
 
                queue<pair<int,int>>q;
                q.push({i,j});
            
                while(!q.empty()){
                    auto it=q.front();
                    q.pop();
                    
                    int x=it.first,y=it.second;
                    grid[x][y]='2';
                    
                    if(valide(x+1,y,m,n))q.push({x+1,y});
                    if(valide(x-1,y,m,n))q.push({x-1,y});
                    if(valide(x,y+1,m,n))q.push({x,y+1});
                    if(valide(x,y-1,m,n))q.push({x,y-1});
                }

            }
            }
        }
        return cnt;
    }
};
