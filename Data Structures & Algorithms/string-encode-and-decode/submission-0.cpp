class Solution {
public:

/*
 write down the length of string before the actual string 
*/
    string encode(vector<string>& strs) {
    string ans;
    for(auto it:strs){
        string ss=to_string(it.size());
        while(ss.size()<3)ss='0'+ss;
        ans+=ss;
        ans+=it;
    }
    cout<<ans<<" ";
    return ans;
    }

    vector<string> decode(string s) {
     vector<string>v;
     int i=0;
     
     while(i<s.size()){
        int len=stoi(s.substr(i,3));
        cout<<len<<" ";
     int nxt_i=(i+3)+ len;
     v.push_back(s.substr(i+3,len));
    i=nxt_i;
     }
     //
     
     return v;

    }
};
