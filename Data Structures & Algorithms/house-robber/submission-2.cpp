class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,0),dpmax(n,0);
        dpmax[0]=dp[0]=nums[0];
        if(n>=2){
        dpmax[1]=dp[1]=nums[1];
        dpmax[1]=max(dpmax[1],dpmax[0]);
        }
        for(int i=2;i<n;i++){
            // take 
            dp[i]= nums[i]+dpmax[i-2];
            //skip 
            dp[i]= max(dp[i], dpmax[i-1]) ;
            dpmax[i]=max(dp[i],dpmax[i-1]);
        }//
        return dpmax[n-1];
    }
};
