class Solution {
public:
  vector<vector<int>>dp;
   int solve(vector<int>&prices,int i,bool hasCoin){// [0,i]
   // hasCoin --> if i have coin or not before comming to index i
    //phase =1 --> i have bought coin
    // phase=0 --> i have no coin
    int n=prices.size(),ans=-5e7;
    if(i>=n ){
        if(hasCoin)return -5e7;
        return 0;
    }
    if(dp[i][hasCoin]!=-1)return dp[i][hasCoin];
    //skip (no buy ,no sold)
    ans=solve(prices,i+1,hasCoin);

    //take (buy  or Sold)
    //buy coin
    if(!hasCoin)ans=max(ans, -prices[i]+solve(prices,i+1,1));
    // sold coin
    if(hasCoin) ans=max(ans,prices[i]+solve(prices,i+2,0));

    return dp[i][hasCoin]=ans;
   }
    int maxProfit(vector<int>& prices) {
        dp.resize(prices.size(),vector<int>(2,-1));
        

        return solve(prices,0,0);
    }
};
