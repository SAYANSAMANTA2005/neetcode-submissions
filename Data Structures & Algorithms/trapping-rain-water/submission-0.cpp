class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>leftmx(n),rightmx(n);
        int rmx=0,lmx=0,water=0;
        for(int i=0;i<n;i++){
           
            lmx=max(lmx,height[i]);
            leftmx[i]=lmx;
        }
        for(int i=n-1;i>=0;i--){
           
            rmx=max(rmx,height[i]);
             rightmx[i]=rmx;
             
        }
        for(int i=0;i<n;i++)water+=min(leftmx[i],rightmx[i])-height[i];
        return water;
    }
};
