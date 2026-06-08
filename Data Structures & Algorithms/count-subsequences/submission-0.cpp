class Solution {
public:
    int numDistinct(string s, string t) {
        int m=s.size(),n=t.size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        for(int i=0;i<=m;i++)dp[i][0]=1;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
              if(s[i-1]==t[j-1]){
           dp[i][j]=dp[i-1][j-1];
              }//
              dp[i][j]+=dp[i-1][j];
            }
        }//
        return dp[m][n];

    }
};

/*
 dp[i][j]
 s[0,i]   t[0,j]

//case1 s[i]==t[j]
  dp[i][j]=dp[i-1][j-1]
  //case2 s[i]!=t[j]
  dp[i][j]+=dp[i-1][j]+dp[i][j-1]

  dp[0][j]  -->0 (if j!=0)

  dp[i][0]--> 0(if i!=0)

*/
