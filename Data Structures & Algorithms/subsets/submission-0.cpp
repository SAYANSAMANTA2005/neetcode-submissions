class Solution {
public:
  set<vector<int>>v;
    void solve(vector<int>&nums,int i,vector<int>curr){
        if(i==nums.size()){v.insert(curr);
        return;}


       // for(auto x:curr)cout<<x<< " ";
        //skip
        solve(nums,i+1,curr);

        //take
        curr.push_back(nums[i]);
        solve(nums,i+1,curr);
        return ;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>curr;
        solve(nums,0,curr);
        vector<vector<int>>ans(v.begin(),v.end());
        return ans;

    }
};

/*
solve(0,[])
  
*/
