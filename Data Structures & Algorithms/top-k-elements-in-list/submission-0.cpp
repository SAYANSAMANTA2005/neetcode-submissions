class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>f;
        int n=nums.size();
        vector<vector<int>>vec(n+1);
        for(auto it:nums)f[it]++;
        for(auto [u,v]:f){
         vec[v].push_back(u);
        }//
        vector<int>ans;
        for(int i=n;i>=0;i--){// time complexity == O(n+k)
            for(auto it:vec[i]){
                if(ans.size()<k)
                ans.push_back(it);
                else return ans;
            }
        }
        return ans;

    }
};
