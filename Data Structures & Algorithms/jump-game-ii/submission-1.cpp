class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int j=0,curr=0,farthest=0,NoOfSteps=0;
       for(int i=0;i+1<n;i++){
         farthest=max(farthest,i+nums[i]);
        if(curr==i){
            curr=farthest;
            NoOfSteps++;
            cout<<curr<<" ";
        }
       }
        return NoOfSteps;
    }
};
/*
 dp[i]--> minimum moves to reach n-1

 for i index -->
 for(int j=0;i=j<nums[i]&& i+j<n ;j++){
 dp[i]=min(dp[j])+1
 }
*/