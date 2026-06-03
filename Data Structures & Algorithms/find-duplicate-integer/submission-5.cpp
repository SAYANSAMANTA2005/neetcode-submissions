class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            //
            
            
            int index=abs(nums[i])-1;
            if(nums[index]<0)return index+1;
            nums[index]*=-1;
        }
        return -1;
    }
};
/*
[2,1,2]
[2,-1,2]

[2,1,3,3]

*/
