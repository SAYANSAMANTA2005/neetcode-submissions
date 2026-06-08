class Solution {
public:

  
    bool checkValidString(string s) {
        int n=s.size();
        int maxOpen=0,minOpen=0;
        for(auto x:s){
            if(x=='(')maxOpen++,minOpen++;
            if(x==')')maxOpen--,minOpen--;
            if(x=='*')maxOpen++,minOpen--;
            if(maxOpen<0)return 0;
            minOpen=max(0,minOpen);
        }
        return minOpen==0;
    }
};
/*
  (( (*  ))

  (  -> +ve
  ) -> -ve 
  * -> +ve, -ve, 0
*/