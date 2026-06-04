class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       // 
       vector<vector<int>>row(9,vector<int>(9,0));
       vector<vector<int>>col(9,vector<int>(9,0));
       vector<vector<int>>box(9,vector<int>(9,0));
       
      for(int r=0;r<9;r++){
        for(int c=0;c<9;c++){
            if (board[r][c] == '.') continue;
            int num=board[r][c]-'1';//[0,8]
            if(row[r][num]||col[c][num]||box[(r/3)*3+(c/3)][num])return 0;
            box[(r/3)*3+(c/3)][num]++;
            row[r][num]++;
            col[c][num]++;
        }
      }
       return 1;
    }
};
