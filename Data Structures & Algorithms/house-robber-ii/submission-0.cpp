class Solution {
public:
   
    int rob(vector<int>& nums) {
        int dp1[101]={0},dp2[101]={0};
        dp1[0]=nums[0];// take 0th ele
        dp2[0]=0;//not allowd to take 0th ele 
        int n=nums.size();
        for(int i=1;i<n;i++){
            //take
            
                if(i<n-1)
            dp1[i]=max(dp1[i],nums[i]+(i>=2?dp1[i-2]:0));
            dp2[i]=max(dp2[i],nums[i]+(i>=2?dp2[i-2]:0));
        
            
            dp1[i]=max(dp1[i],dp1[i-1]);
            dp2[i]=max(dp2[i],dp2[i-1]);

        }
        return  max(dp2[n-1],dp1[n-1]);
    }
};
