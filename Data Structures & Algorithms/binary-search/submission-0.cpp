class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size(),l=0,r=n-1;
        int ans=-1;
        while(r>=l){
            int m=(l+r)/2;
            if(nums[m]>=target){
                r=m-1;
                if(nums[m]==target)
                ans=m;
            }
            else l=m+1;
        }
        return ans;
    }
};
