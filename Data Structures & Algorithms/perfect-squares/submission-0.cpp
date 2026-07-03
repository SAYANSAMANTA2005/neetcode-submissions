class Solution {
public:
  vector<int> dp = vector<int>(10001, -1);
    int numSquares(int n) {
        if(n==0)return 0;
        if(dp[n]!=-1)return dp[n];
        int ans=n;
        for(int i=1;i*i<=n;i++){
            ans=min(ans,numSquares(n-i*i)+1);
        }
       return  dp[n]=ans;
        
    }
};