class Solution {
public:
    vector<int>dp;
    int solve(string s,int i){
        if(i==s.size())return 1;
        if(dp[i]!=-1)return dp[i];
        int ans=0;
        if(s[i]=='0')return 0;
        ans=solve(s,i+1);//s[i]--> convert s[i]  to a char
        //s[i+1]
        if(s.size()>i+1 && stoi(s.substr(i,2))<=26)
        ans+=solve(s,i+2);
        return dp[i]=ans;
        
    }
    int numDecodings(string s) {
        dp.resize(s.size(),-1);
      return solve(s,0);
    }
};
