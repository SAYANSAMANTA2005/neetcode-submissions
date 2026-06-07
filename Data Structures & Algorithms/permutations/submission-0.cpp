class Solution {
public:
vector<vector<int>>ans;
    void solve(vector<int>&nums,int i,vector<int>&curr,vector<int>vis){
        if(curr.size()==nums.size()){
            ans.push_back(curr);
            return;}
        for(int i=0;i<nums.size();i++){
            if(!vis[i]){
                curr.push_back(nums[i]);
                vis[i]=1;
                solve(nums,i+1,curr,vis);
                //backtrack
                curr.pop_back();
                vis[i]=0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<int>vis(n,0),curr;
        solve(nums,0,curr,vis);
        return ans;

    }
};
