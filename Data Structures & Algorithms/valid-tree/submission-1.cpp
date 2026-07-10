class Solution {
public:
bool f=0;
vector<int>vis;
    void dfs(int u,int par,vector<int>adj[]){
        
       for(auto &v:adj[u]){
        if(v==par)continue;
        if(vis[v]){f=1;return;}
        else{
            vis[v]=1;
            dfs(v,u,adj);
        }
       }
    }
    bool validTree(int n, vector<vector<int>>& edges) {
     vector<int>adj[n];
     vis.resize(n,0);
     for(auto &it:edges){
        int u=it[0],v=it[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
     }//
     vis[0]=1;
     dfs(0,-1,adj);
      for(int i=0;i<n;i++)if(!vis[i])return 0;
     //f=1 -->cycle ache-->not tree
     return (1-f);
    }
};
