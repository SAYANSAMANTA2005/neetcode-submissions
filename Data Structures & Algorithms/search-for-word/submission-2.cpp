class Solution {
public:
int m,n;
bool ans=false;
string word;
    int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
    void dfs(vector<vector<char>>& board,int x,int y,string &s,vector<vector<int>>&vis){
        int len=s.size();
        if(len==word.size() ){
            //if(s==word)
            ans=1;
            return;
        }
        for(int t=0;t<4;t++){
            int nx=x+dx[t],ny=y+dy[t];
            if(nx>=0 && ny>=0 && nx<m && ny<n && !vis[nx][ny] && board[nx][ny]==word[len]){
                s+=word[len];
                vis[nx][ny]=1;
             dfs(board,nx,ny,s,vis);
             //backtrack
             s.pop_back();
             vis[nx][ny]=0;
            }
        }
    }
    bool exist(vector<vector<char>>& board, string w) {
        word=w;
         m=board.size(),n=board[0].size();
         vector<vector<int>>vis(m,vector<int>(n,0));
         string s;
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(word[0]==board[i][j]){
                s+=word[0];
                vis[i][j]=1;
                dfs(board,i,j,s,vis);
                s.pop_back();
             vis[i][j]=0;
                }
            }
         }//
         return ans;

    }
};
