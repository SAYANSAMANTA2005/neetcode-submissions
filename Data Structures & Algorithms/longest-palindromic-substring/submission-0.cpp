class Solution {
   public:
    string longestPalindrome(string s) {
        int ans=1, n = s.size(),i1=0,i2=0;
        string res;
        for (int i = 0; i < n; i++) {
           
            // odd center palindrome --> palindromes with at odd length with s[i]--> as their middle
            // element
            for (int j1 = i + 1, j2 = i - 1; j1 < n && j2 >= 0 && s[j1] == s[j2]; j1++, j2--) {
                ans=max(ans,j1-j2+1);
                if(ans==j1-j2+1)i1=j1,i2=j2;
            }
            // even center palindromes
            for (int j1 = i, j2 = i - 1; j1 < n && j2 >= 0 && s[j1] == s[j2]; j1++, j2--) {
               ans=max(ans,j1-j2+1);
               if(ans==j1-j2+1)i1=j1,i2=j2;
            }
        }
        return s.substr(i2,ans);
    }
};
