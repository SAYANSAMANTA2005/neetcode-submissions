class Solution {
public:
vector<vector<int>>dp;
    int solve(vector<int>&nums,int i,int j){
        int ans=0;
       if(j<i)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        for(int k=i;k<=j;k++){
    ans=max(ans,solve(nums,i,k-1)+solve(nums,k+1,j)+nums[i-1]*nums[k]*nums[j+1]);
        }
        return dp[i][j]=ans;
    }
    int maxCoins(vector<int>& nums) {
        vector<int>a;
        a.push_back(1);
        for(auto x:nums){
            a.push_back(x);
        }
        a.push_back(1);
        dp.resize(a.size(),vector<int>(a.size(),-1));

        return solve(a,1,nums.size());
    }
};

/*

solve(0,n-1)

 solve(0,k)+solve(k+1,n-1)+3 element*



*/
