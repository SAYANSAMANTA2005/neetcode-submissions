class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        nums[n-1]=1;
        int j=n-1;
        for(int i=n-2;i>=0;i--){
         if(nums[i]>=j-i){nums[i]=1;j=i;}
         else nums[i]=0;
        }
        return nums[0];
    }
};

/*
myidea is ,storing current nearest possible index j with dp[j]=1
*/
