class Solution {
public:
    string minWindow(string s, string t) {
        int l=0,r=0,mnlen=1e9,start=-1;
         vector<int>freq('z'-'A'+10,0),need('z'-'A'+10,0);
          int required=0,have=0;
         for(auto x:t){need[x-'A']++;
         required+=need[x-'A']==1;}
        
        
        while(r<s.size()){
           freq[s[r]-'A']++;
           if(freq[s[r]-'A']==need[s[r]-'A'])have++;
         while(have==required){

            mnlen=min(mnlen,r-l+1);
            if(mnlen==r-l+1)start=l;
             freq[s[l]-'A']--;
             if(freq[s[l]-'A']<need[s[l]-'A'] && need[s[l]-'A'])have--;
            l++;
         }
           
           r++;
        }
         if(start==-1)return "";
        cout<<(int)'A'<<" "<<(int)'z'<<endl;
        return s.substr(start,mnlen);
    }
};
