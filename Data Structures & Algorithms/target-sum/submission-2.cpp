class Solution {
public:
vector<vector<int>>dp;
int OFFSET;
   int solve(vector<int>&nums,int i,int target){
    int n=nums.size(),ans=0;
    //+ nums[i]
          if(abs(target) > OFFSET)
            return 0;
    if(i==n){
        if(target==0)return 1;
        return 0;
    }
    if(dp[i][target+OFFSET]!=-1)return dp[i][target+OFFSET];
   ans+=solve(nums,i+1,target-nums[i]);

    //-nums[i]
    ans+=solve(nums,i+1,target+nums[i]);
    return dp[i][target+OFFSET]=ans;
   }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        OFFSET=sum;
        if(abs(target)>sum)return 0;
        dp.resize(nums.size()+1,vector<int>(2*sum+1,-1));
      return solve(nums,0,target);  
    }
};
