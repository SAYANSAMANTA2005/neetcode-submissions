class Solution {
   public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        int currSubStringLen = 0;
        vector<int>ans,last_index(26,-1);
        for(int i=0;i<n;i++)last_index[s[i]-'a']=i;
        int j=0;
        for (int i = 0; i < n; i++) {
            j = max(j, last_index[s[i]-'a']);
            currSubStringLen++;
            if (i == j) {
                ans.push_back(currSubStringLen);
                currSubStringLen = 0;
            }
        }//
        return ans;
    }
};
/*
 s = "xyxxyzbzbbisl"

 i=0;
 j--> last occuring index in our current substring
 int currSubStringLen=0;
for(int i=0;i<n;i++){

j=max(j,last_index[s[i]]);
currSubStringLen++;
if(i==j){
ans.push_back(currSubStringLen);
currSubStringLen=0;
  }
}
*/