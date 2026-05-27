class Solution {
public:

    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int s=n*(n+1)/2,sm=0;
        for(auto it:nums)sm+=it;
        return s-sm;
    }
};
