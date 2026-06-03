class Solution {
public:
    int countSubstrings(string s) {
        int cnt=0,n=s.size();
        for(int i=0;i<n;i++){
            cnt++;
            //odd center palindrome --> palindromes with at odd length with s[i]--> as their middle element
            for(int j1=i+1,j2=i-1;j1<n && j2>=0 && s[j1]==s[j2];j1++,j2--){
             cnt++;
            }
            //even center palindromes
            for(int j1=i,j2=i-1;j1<n && j2>=0 && s[j1]==s[j2];j1++,j2--){
             cnt++;
            }
         
        }
        return cnt;
    }
};
