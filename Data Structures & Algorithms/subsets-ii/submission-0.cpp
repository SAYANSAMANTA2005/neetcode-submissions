class Solution {
public:
set<vector<int>>ans;
   void solve(vector<int>&nums,int i,vector<int>&curr){
    if(i==nums.size()){
        ans.insert(curr);
        return;
    }
    //skip
       solve(nums,i+1,curr);
    //take 
     curr.push_back(nums[i]);
     solve(nums,i+1,curr);
     //backtrack
     curr.pop_back();


   }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>curr;
        solve(nums,0,curr);
        vector<vector<int>>res(ans.begin(),ans.end());
        return res;
    }
};
