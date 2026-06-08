class Solution {
public:
    int numDistinct(string s, string t) {
        int m=s.size(),n=t.size();
      
        vector<int>dp(n+1,0),ndp(n+1,0);
        //dp[j]-->dp[i-1][j],ndp[j]--dp[i][j]
       //for(int i=0;i<=m;i++)dp[i][0]=1;
       dp[0]=1;ndp[0]=1;
      
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                ndp[j]=0;
              if(s[i-1]==t[j-1]){
           ndp[j]=dp[j-1];
              }//
              ndp[j]+=dp[j];
            }
            dp=ndp;
        }//
        return ndp[n];

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
