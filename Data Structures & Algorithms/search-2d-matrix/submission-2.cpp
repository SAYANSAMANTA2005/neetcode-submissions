class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int mm=matrix.size(),n=matrix[0].size();
        /*
       0,0->0 

       0,1-> 1
        */
        //row major transformation of  2d matricx to 1d array
        int l=0,r=mm*n-1;
        while(r>=l){
            int m=(l+r)/2;
            int x=m/n,y=m%n;//row major transformation of 1d array to 2d matricx
            if(matrix[x][y]>=target){
                r=m-1;
                if(matrix[x][y]==target)return 1;
            }
            else l=m+1;
        }
        return 0;
    }
};
/*

 r0 ->lst -->(n-1)

 r1 lst-> n,n+1,..
*/
