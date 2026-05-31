class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     int n=nums.size();
     vector<int>p(n,1),s(n,1),ans(n);
     int pp=1,ss=1;
     for(int i=0;i<n;i++){
        p[i]=pp;
        pp*=nums[i];
     }
     for(int i=n-1;i>=0;i--){
        s[i]=ss;
        ss*=nums[i];
     }
     for(int i=0;i<n;i++)ans[i]=p[i]*s[i];
     return ans;
     
    }
};
