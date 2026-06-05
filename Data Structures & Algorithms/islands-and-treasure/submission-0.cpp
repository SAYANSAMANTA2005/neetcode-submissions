class Solution {
   public:
    int INF = INT_MAX;
    vector<vector<int>> grid;
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    bool valide(int i, int j, int m, int n) {
        return (i >= 0 && j >= 0 && i < m && j < n && grid[i][j] == INF );
    }
    void islandsAndTreasure(vector<vector<int>>& g) {
        grid = g;
        int m = grid.size(), n = grid[0].size();
       
        queue<pair<int, int>> q;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) {
                   
                    q.push({i, j});

                  //
                }
            }

        }
        int level=0;
                while (!q.empty()) {
                    int sz=q.size();
                    level++;
                   while(sz--){
                        auto [x, y] = q.front();
                        grid[x][y]=2;//visited
                        q.pop();

                        for (int t = 0; t < 4; t++) {//
                            if(valide(x+dx[t],y+dy[t],m,n)){
                                grid[x+dx[t]][y+dy[t]]=2;
                            q.push({x + dx[t], y + dy[t]});
                            g[x+dx[t]][y+dy[t]]=level;
                            }
                          }
                        }

                    }
          //
    }
};
