struct DSU{
    vector<int>par,sz;
      int components;
    DSU(int n){
      par.resize(n);
      sz.resize(n,1);
        components=n;
      for(int i=0;i<n;i++)par[i]=i;
    }
    int find(int x){
        if(par[x]==x)return x;
        return par[x]=find(par[x]);
    }
    void unite(int x,int y){
     x=find(x);
     y=find(y);
     if(x==y)return;
     if(sz[x]<sz[y])swap(x,y);


     if(sz[x]>=sz[y]){
        sz[x]+=sz[y];
        par[y]=x;
          components--;
     }
    }
};

class Solution {
public:


vector<vector<char>> grid;
   bool valide(int x,int y,int m,int n){
    return (x>=0 && y>=0 && x<m && y<n && grid[x][y]!='0' );
   }
    int numIslands(vector<vector<char>>& g) {
        grid=g;
        int m=grid.size(),n=grid[0].size(),cnt=0;
        DSU dsu(m*n);

              for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if( grid[i][j]=='1')cnt++;
        }
      }
      dsu.components=cnt;
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int val=i*n+j;
            if(grid[i][j]=='1'){
                cnt++;
                //grid[i][j]='2';
                int x=i,y=j;
                  if(valide(x+1,y,m,n))dsu.unite(val,(x+1)*n+y);
                    if(valide(x-1,y,m,n))dsu.unite(val,(x-1)*n+y);
                    if(valide(x,y+1,m,n))dsu.unite(val,(x)*n+(y+1));
                    if(valide(x,y-1,m,n))dsu.unite(val,(x)*n+(y-1));
            }
        }
      }
    
        return dsu.components;
    }
};

