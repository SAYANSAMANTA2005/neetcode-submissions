class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       set<vector<int>>s;
        int n=nums.size();map<int,int>f;
        for(int j=0;j<n;j++){
            
            for(int k=j+1;k<n;k++){
            int t=-(nums[j]+nums[k]);

            if(f.count(t)){
                vector<int>arr={nums[f[t]],nums[j],nums[k]};
                sort(arr.begin(),arr.end());
                s.insert(arr);}
            }
            f[nums[j]]=j;
        }
         vector<vector<int>>v(s.begin(),s.end());
        return v;
    }
};
