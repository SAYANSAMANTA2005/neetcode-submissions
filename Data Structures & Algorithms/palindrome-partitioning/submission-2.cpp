class Solution {
public:
bool check(vector<string>&ans){
    for(auto &x:ans){
        int l=0,r=x.size()-1;
        while(l<r){
            if(x[l]!=x[r]){
                return 0;
                
            }
            l++;r--;
        }
    }
    return 1;
}
  vector<vector<string>>res;
  void solve(int i,vector<string>&ans,string &s){
    if(i==s.size()){
        if(check(ans))
        res.push_back(ans);
    return;
    }//

    //op1 --> include that in curr string
    string it;
    if(ans.size()){
    it=ans.back();
    ans.pop_back();
    }
    it+=s[i];
    ans.push_back(it);
    
    solve(i+1,ans,s);
     if(ans.size()){
        ans.back().pop_back();
     }


    //op2 -- create a new string
    if(ans.size() &&ans.back().size()!=0){
    it="";it+=s[i];
    ans.push_back(it);
    solve(i+1,ans,s);
    ans.pop_back();
    }

    


  }
  
    vector<vector<string>> partition(string s) {
        vector<string>ans;
        //cout<<ans.back();
         solve(0,ans,s);
        return res;
    }
};
