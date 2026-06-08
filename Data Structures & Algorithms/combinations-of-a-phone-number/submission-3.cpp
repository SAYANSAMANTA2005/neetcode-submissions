class Solution {
public:
vector<string>ans;
vector<char> digit[10];
   void solve(string &s,int i,string &curr){
    if(i==s.size()){
        if(curr.size())ans.push_back(curr);return ;}
    int dgt=s[i]-'0';
    for(auto x:digit[dgt]){
        curr.push_back(x);
        solve(s,i+1,curr);
        curr.pop_back();
    }
   }
    vector<string> letterCombinations(string digits) {
        char ch='a';
        for(int i=2;i<=9;i++){
           // cout<<ch<<" ";
        for(int j=0;j<((i==7||i==9)?4:3);j++){
           // cout<<ch<<" ";
            digit[i].push_back(ch);
            ch++;
         }
        }

  
        string curr;
        solve(digits,0,curr);
        return ans;
    }
};
