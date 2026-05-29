class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int>f;
        for(auto it:nums){
            f[it]++;
            if(f[it]==2)return 1;
        }
        return 0;
    }
};