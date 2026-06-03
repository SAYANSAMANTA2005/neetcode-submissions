class Solution {
public:
  vector<vector<int>>dp;
    bool solve(vector<int>&nums,int i,int sum){
        int n=nums.size();
     if(sum==0)return 1;
     if(i+1==n)return 0;//bcz still sum !=0
     if(dp[i][sum]!=-1)return dp[i][sum];
     bool ans=0;
     // take 
     if(sum>=nums[i])ans|=solve(nums,i+1,sum-nums[i]);



     //skip
     ans|=solve(nums,i+1,sum);
     return dp[i][sum]=ans;
    }
    bool canPartition(vector<int>& nums) {
        //dp.resize(nums.size(),vector<int>(sum/2+1,-1));
        int sum=0;
        for(auto x:nums)sum+=x;
         dp.resize(nums.size(),vector<int>(sum/2+1,-1));
        return solve(nums,0,sum/2) && (sum%2==0);
    }
};
