class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();

        queue<pair<int,int>> q;

        // Push all treasure cells
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 0)
                    q.push({i,j});
            }
        }

        int dx[4] = {1,-1,0,0};
        int dy[4] = {0,0,1,-1};

        while(!q.empty()) {
            auto [x,y] = q.front();
            q.pop();

            for(int k = 0; k < 4; k++) {
                int nx = x + dx[k];
                int ny = y + dy[k];

                if(nx < 0 || ny < 0 || nx >= m || ny >= n)
                    continue;

                if(grid[nx][ny] != INT_MAX)
                    continue;

                grid[nx][ny] = grid[x][y] + 1;
                q.push({nx,ny});
            }
        }
    }
};