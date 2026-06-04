class Solution {
public:
    set<vector<int>>v;
    void solve(vector<int>&nums,int i,int target,vector<int>curr){
      if(i==nums.size()){
        if(target==0)
        v.insert(curr);
        return;
      }
      //skip ith element
      solve(nums,i+1,target,curr);
      //use ith element
      if(target>=nums[i]){
      curr.push_back(nums[i]);
      solve(nums,i,target-nums[i],curr);
      }


    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>curr;
        solve(nums,0,target,curr);
        vector<vector<int>>ans(v.begin(),v.end());
        return ans;
    }
};
