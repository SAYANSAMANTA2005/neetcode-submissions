class Solution {
public:
    vector<int>nextsmallerElementindex(vector<int>& heights){
        int n=heights.size();
        vector<int>res(n,n);
        stack<int>st;
        for(int i=0;i<n;i++){
         if(st.empty())st.push(i);
         else{
            while(!st.empty() && heights[i]<heights[st.top()]){
              res[st.top()]=i;
              st.pop();
            }
            //height[i]>st.top()
            st.push(i);
         }
        }
        return res;
       
    }

        vector<int>prevsmallerElementindex(vector<int>& heights){
                   int n=heights.size();
        vector<int>res(n,-1);
        stack<int>st;
        for(int i=n-1;i>=0;i--){
         if(st.empty())st.push(i);
         else{
            while(!st.empty() && heights[i]<heights[st.top()]){
              res[st.top()]=i;
              st.pop();
            }
            st.push(i);
         }
        }
        return res;

       
    }
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size(),maxarea=0;
        vector<int>nse=nextsmallerElementindex(heights),
        pse=prevsmallerElementindex(heights);
        for(int i=0;i<n;i++){
            cout<<nse[i]<<" ";
          int area=heights[i]*(nse[i]-pse[i]-1);
          maxarea=max(maxarea,area);
        }
        return maxarea;
    }
};
//

/*
 8    12

 9,10,11
 nse[i]-pse[i]-1

 nse-1 -(pse+1)+1

*/