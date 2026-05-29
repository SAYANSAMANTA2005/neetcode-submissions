class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();vector<int>v;
        unordered_map<int,vector<int>>f;
        for(int i=n-1;i>=0;i--)f[nums[i]].push_back(i);
        for(int i=0;i<n;i++){
            int p=target-nums[i];
             f[nums[i]].pop_back();
            if(f[nums[i]].size()==0)f.erase(nums[i]);
            if(f.count(p)){
           v={i,f[p][0]};break;
            }
            
        }
        return v;
    }
};
