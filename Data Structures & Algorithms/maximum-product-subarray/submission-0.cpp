class Solution {
public:
int mx=INT_MIN;
  vector<int>dpmin,dpmax;
  int  maxproduct(vector<int>& nums,int i){
    if(i+1==nums.size()){
        mx=max(nums[i],mx);
        return nums[i];
    }
    if(dpmax[i]!=1e5)return dpmax[i];
    //cout<<max({nums[i+1],nums[i+1]*maxproduct(nums,i+1),nums[i+1]*minproduct(nums,i+1)})<<" "<<i<<endl;
    int ans=max({nums[i],nums[i]*maxproduct(nums,i+1),nums[i]*minproduct(nums,i+1)});
    mx=max(ans,mx);
        return dpmax[i]=ans;
        /*
         maxprod(0)
         max(-2,-2*minpro(1))
        */
  }  // nums[0,i]
  int  minproduct(vector<int>& nums,int i){
    if(i+1==nums.size())return nums[i];
    if(dpmin[i]!=1e5)return dpmin[i];
     return dpmin[i]=min({nums[i],nums[i]*maxproduct(nums,i+1),nums[i]*minproduct(nums,i+1)});
  } // nums[0,i]

    int maxProduct(vector<int>& nums) {
        dpmin.resize(nums.size(),1e5);
        dpmax.resize(nums.size(),1e5);
        maxproduct(nums,0);
        return mx;
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