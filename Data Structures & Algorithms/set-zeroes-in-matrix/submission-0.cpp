class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        int row0=0,col0=0;
        for(int i=0;i<m;i++)col0+=matrix[i][0]==0;// oth col info 
        for(int j=0;j<n;j++)row0+=matrix[0][j]==0;// 0th row info 

        for(int  i=0;i<m;i++){
            for(int j=0;j<n;j++){
           if(matrix[i][j]==0)matrix[i][0]=matrix[0][j]=0;
            }
        }

        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][0]==0 ||matrix[0][j]==0)matrix[i][j]=0;
            }
        }//
         for(int i=0;i<m;i++)if(col0)matrix[i][0]=0;
         for(int j=0;j<n;j++)if(row0)matrix[0][j]=0;

    }
};

/*
 matrix = 
 [
  [1,2,3],
  [4,0,5],
  [6,7,0]
]

which rows & columns conatins a element with 0

//space optimised sol -->
mat[0]--> storing info about jth column

mat[i][0]  (0th colmn)-->
 for storing info about ith row 

  [1,0,0],
  [0,0,5],
  [0,7,0]

  (1,1) to (m-1,n-1)
*/