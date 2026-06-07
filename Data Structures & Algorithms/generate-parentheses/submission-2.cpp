class Solution {
public:
vector<string>ans;
   void solve(string &s,int i,int n,int open,int close){
    if(i==2*n){
    if(open==n && close==n ){
     ans.push_back(s);
     }
     return;
    }//
    if(open-close<0){
    
       // s="";
       return;
        }

    //op1-- (
    s+='(';
    solve(s,i+1,n,open+1,close);
    s.pop_back();
    //op2 -- ')
    s+=')';
    solve(s,i+1,n,open,close+1);
    s.pop_back();

   }
    vector<string> generateParenthesis(int n) {
        string s;
        solve(s,0,n,0,0);
        return ans;
    }
};
