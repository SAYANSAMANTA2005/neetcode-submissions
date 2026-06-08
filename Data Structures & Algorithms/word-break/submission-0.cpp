class Solution {
public:

vector<int>dp;
   bool solve(string &s,vector<string>& wordDict,int i){
    //my current search starts from index i
    int n=s.size();
    bool ans=0;
    if(i>=n){
        //logic
        ans=1;
        return ans;
    }//
    if(dp[i]!=-1)return dp[i];
   for(auto &x:wordDict){
    if(i+x.size()<=n && s.substr(i,x.size())==x){
       if( solve(s,wordDict,i+x.size()))ans=1;
    }
   }//
return dp[i]=ans;
   }
    bool wordBreak(string s, vector<string>& wordDict) {
        dp.resize(s.size(),-1);
        return solve(s,wordDict,0);
       // return ans;
    }
};
