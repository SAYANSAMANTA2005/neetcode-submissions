class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int n=nums.size();
     vector<int>dp(n);
     int sum=0,ans=INT_MIN;
     for(int i=0;i<n;i++){
        if(sum+nums[i]>nums[i])
        sum+=nums[i];
        else sum=nums[i];
        ans=max(ans,sum);
     }
     return ans;
    }
};
