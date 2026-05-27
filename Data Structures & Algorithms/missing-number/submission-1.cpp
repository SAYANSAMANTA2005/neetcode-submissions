class Solution {
public:
int xor0ToN(int n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int xorr=0;
        for(auto it:nums)xorr^=it;
        return xor0ToN(n)^xorr;
    }
};
