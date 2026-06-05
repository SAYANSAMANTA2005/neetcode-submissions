class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int m=grid.size(),n=grid[0].size();
       int fresh=0;
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({i,j});           
                }
                else if(grid[i][j]==1)fresh++;
            }
        }
        if(fresh==0)return 0;
        int minute=0;
        int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
       while(!q.empty() && fresh>0){
        int sz=q.size();
        while(sz--){
            auto [x,y]=q.front();q.pop();
            for(int t=0;t<4;t++){
                int nx=x+dx[t],ny=y+dy[t];
                if(nx>=0 && ny>=0 && nx<m && ny<n && grid[nx][ny]==1){
                    fresh--;
                    grid[nx][ny]=2;//become rotten
                    q.push({nx,ny});
                }
            }

        }
        minute++;
       }
        if(fresh)return -1;
        return minute;
    }
};
