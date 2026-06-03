class Solution {
public:
vector<vector<int>>dp;
   int solve(vector<int>& coins,int i,int amount){
    int n=coins.size(),ans=0;
    if(i==n){
        if(amount==0)return 1;
        return 0;
    }
    if(dp[i][amount]!=-1)return dp[i][amount];
    // remians at index i 
    if(amount>=coins[i])
    ans=solve(coins,i,amount-coins[i]);
    // go to index i+1
    ans+=solve(coins,i+1,amount);
    return dp[i][amount]=ans;
   }
    int change(int amount, vector<int>& coins) {
        dp.resize(coins.size(),vector<int>(amount+1,-1));
        return solve(coins,0,amount);
    }
};
