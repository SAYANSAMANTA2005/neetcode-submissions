class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,mx=0,n=prices.size();
       for(int i=n-1;i>=0;i--){
        profit=max(profit,mx-prices[i]);
        mx=max(mx,prices[i]);
       }
       return profit;
    }
};
