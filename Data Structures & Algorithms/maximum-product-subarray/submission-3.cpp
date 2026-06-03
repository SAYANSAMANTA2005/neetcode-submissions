class Solution {
public:

    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int mx=nums[0],mn=nums[0],globalmax=nums[0];
        for(int i=1;i<n;i++){
            int newmx=max({nums[i],nums[i]*mx,nums[i]*mn});
            int newmn=min({nums[i],nums[i]*mx,nums[i]*mn});
            mx=newmx;
            mn=newmn;
            globalmax=max(globalmax,mx);
        }
        return globalmax;
    }
};
/*
 subarray end at index i 

    maxproduct(nums,i);  // nums[0,i]
    minproduct(nums,i);  // nums[0,i]

    maxproduct(nums,i+1)  --> {
    1. nums[i+1]
    2. nums[i+1]*(nums[i],,..)
    }
    maxproduct(nums,i+1)=max({nums[i],nums[i]*maxproduct(nums,i),nums[i]*minproduct(nums,i)});
    minproduct(nums,i+1)=min({nums[i],nums[i]*maxproduct(nums,i),nums[i]*minproduct(nums,i)});
*/