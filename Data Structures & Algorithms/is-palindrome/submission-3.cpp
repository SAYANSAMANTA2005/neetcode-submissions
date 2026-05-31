class Solution {
public:
    bool isPalindrome(string s) {
        string ans,ans2;
        for(auto it:s){
            if(isalnum(it)){
            if(it<='Z'&& it>='A')
            {it='a'+(it-'A');
        } 
            ans+=it; 
           }
        }
        ans2=ans;
        reverse(ans.begin(),ans.end());
        return ans==ans2;
    }
};
