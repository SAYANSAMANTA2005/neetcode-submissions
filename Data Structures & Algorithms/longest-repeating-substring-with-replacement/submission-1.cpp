class Solution {
public:
    int characterReplacement(string s, int k) {
        int duplicate_char=0;
        int l=0,r=0,ans=0,maxf=0;
        map<char,int>f;
        while(r<s.size()){//////////////////////             ///////////////
            f[s[r]]++;
           maxf=max(maxf,f[s[r]]);                    

           if((r-l+1)-maxf>k){          
            f[s[l]]--;
            l++;
           }
           ans=max(ans,r-l+1);
          r++;
        }
        return ans;
    }
};
