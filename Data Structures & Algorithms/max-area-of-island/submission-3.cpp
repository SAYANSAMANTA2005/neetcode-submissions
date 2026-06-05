class Solution {
public:
vector<vector<int>> grid;
 bool valide(int i,int j,int m,int n){
    return (i>=0 && j>=0 && i<m && j<n && grid[i][j]==1);
 }
int dx[4]={1,-1,0,0} ;
int dy[4]={0,0,1,-1};
    int maxAreaOfIsland(vector<vector<int>>& g) {
        grid=g;
        int m=grid.size(),n=grid[0].size();
        int maxarea=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){//first time visisng --> new components
                    int area=0;
                    queue<pair<int,int>>q;
                    q.push({i,j});
                   // grid[i][j]=2;//visited
                    while(!q.empty()){
                        auto [x,y]=q.front();
                        cout<<x<<" "<<y<<endl;
                    
                        grid[x][y]=2;//visited
                        area++;
                        q.pop();
                        for(int t=0;t<4;t++){
                            if(valide(x+dx[t],y+dy[t],m,n)){
                               // area++;
                               grid[x+dx[t]][y+dy[t]]=2;
                                q.push({x+dx[t],y+dy[t]});
                            }

                        }
                    }
                    maxarea=max(maxarea,area);
                }
            }
        }//
        return maxarea;
    }
};
