class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>leftmax(n),rightmax(n);
        int rightmx=0,leftmx=0,water=0;
        for(int i=0;i<n;i++){
           
            leftmx=max(leftmx,height[i]);
            leftmax[i]=leftmx;
        }
        for(int i=n-1;i>=0;i--){
           
        rightmx=max(rightmx,height[i]);
             rightmax[i]=rightmx;
             
        }
        for(int i=0;i<n;i++)water+=min(leftmax[i],rightmax[i])-height[i];
        return water;
    }
};
