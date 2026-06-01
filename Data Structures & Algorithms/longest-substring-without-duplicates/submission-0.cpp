class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,ans=0;
        map<char,int>f;
        while(r<s.size()){
        f[s[r]]++;
        while(f.size()<r-l+1){
            f[s[l]]--;
            if(f[s[l]]==0)f.erase(s[l]);
            l++;
        }
        if(f.size()==r-l+1)ans=max(ans,r-l+1);

        r++;
        }
        return ans;
    }
};
