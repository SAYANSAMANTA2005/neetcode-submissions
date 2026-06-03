class Solution {
public:
   int solve(vector<int>&nums,int i,int target){
    int n=nums.size(),ans=0;
    //+ nums[i]
    if(i==n){
        if(target==0)return 1;
        return 0;
    }
   ans+=solve(nums,i+1,target-nums[i]);

    //-nums[i]
    ans+=solve(nums,i+1,target+nums[i]);
    return ans;
   }
    int findTargetSumWays(vector<int>& nums, int target) {
      return solve(nums,0,target);  
    }
};
