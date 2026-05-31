class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>>mp;
        for(auto it:strs){
            auto i=it;
            vector<int>cnt(26,0);
            for(auto j:it)cnt[j-'a']++;
            //sort(it.begin(),it.end());
            mp[cnt].push_back(i);
        }
        vector<vector<string>>v;
        for(auto p:mp){
            v.push_back(p.second);
        }
        return v;
    }
};
