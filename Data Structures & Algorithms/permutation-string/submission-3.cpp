class Solution {
public:
    bool checkInclusion(string s1, string s) {
        vector<int>freq(26,0),curfreq(26,0);
        for(auto x:s1)freq[x-'a']++;
       
         int l=0,r=0;
         while(r<s.size()){
            curfreq[s[r]-'a']++;
           while((r-l+1)>s1.size()){
            curfreq[s[l]-'a']--;
            l++;
           }
           int flag=1;
           for(char ch='a';ch<='z';ch++){
            if(freq[ch-'a']!=curfreq[ch-'a'] ){
                flag=0;
              //  cout<<l<<" "<<r<<endl;
                //return 1;
            }
           }
           if(flag)return 1;
            r++;
         }
      return 0;
    }
};
