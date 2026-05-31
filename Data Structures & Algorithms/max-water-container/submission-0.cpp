class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int left=0,right=n-1,area=0;
        while(left<right){
          int width=right-left;
           area=max(area,width*min(heights[left],heights[right]));
          if(heights[left]<heights[right])left++;
          else right--;
          //area=max(area,width*(abs(hegiht[left]-height[right])));

        }//
        return area;
    }
};
