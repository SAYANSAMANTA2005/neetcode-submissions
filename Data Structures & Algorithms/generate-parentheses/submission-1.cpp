class Solution {
public:
vector<string>ans;
   void solve(string &s,int i,int n,int opclose){
    if(i==2*n){
    if(opclose==0 ){
     ans.push_back(s);
     }
     return;
    }//
    if(opclose<0){
    
       // s="";
       return;
        }

    //op1-- (
    s+='(';
    solve(s,i+1,n,opclose+1);
    s.pop_back();
    //op2 -- ')
    s+=')';
    solve(s,i+1,n,opclose-1);
    s.pop_back();

   }
    vector<string> generateParenthesis(int n) {
        string s;
        solve(s,0,n,0);
        return ans;
    }
};
