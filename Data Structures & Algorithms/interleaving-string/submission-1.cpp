class Solution {
public:
   vector<vector<int>>dp;
    bool solve(string &s1,string &s2,string &s3,int i,int j){
      // i,j means i can currenyly take s1[i] or s2[j]
      /*
      i+1 --> len of s1
      j -->len of s2


      */
     // if(dp[i][j]!=-1)return dp[i][j];
      if(i==s1.size() && j==s2.size())return true;

      bool ans=false;

      if(i<s1.size()  &&s1[i]==s3[i+j])ans|=solve(s1,s2,s3,i+1,j);
      if( j<s2.size()   &&s2[j]==s3[i+j])ans|=solve(s1,s2,s3,i,j+1);
      return dp[i][j]=ans;
    }
    bool isInterleave(string s1, string s2, string s3) {
        int m=s1.size(),n=s2.size();
        dp.resize(m+1,vector<int>(n+1,-1));
        //vector<vector<int>>dp(m+1,vector<int>(n+1,0));

        return (s3.size()==n+m)&&solve(s1,s2,s3,0,0);
    }
};
/*
solve(0,0)--->
 if(s1[0]==s3[0])
 solve(1,0)  
 if(s2[0]==s3[0])
 solve(0,1)  
*/
