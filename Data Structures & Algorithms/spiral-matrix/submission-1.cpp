class Solution {
public:
 bool valide(int x,int y,int n,int m,vector<vector<int>>&vis){
    return (x>=0 && y>=0 && x<n && y<m && !vis[y][x]);
 }
 vector<vector<int>> moves={{1,0},{0,1},{-1,0},{0,-1}};
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        vector<int>ans;
        vector<vector<int>>vis(m,vector<int>(n,0));
        int x=0,y=0,phase=0;
        while(valide(x,y,n,m,vis)){
            vis[y][x]=1;
            ans.push_back(matrix[y][x]);
            int nx=(x+moves[phase][0]),ny=(y+moves[phase][1]);
            if(!valide(nx,ny,n,m,vis))phase=(phase+1)%4;
        
         
          nx=(x+moves[phase][0]),ny=(y+moves[phase][1]);
         // cout<<nx<<" "<<ny<<endl;
          swap(nx,x),swap(ny,y);
            
        }
        return ans;
    }
};
