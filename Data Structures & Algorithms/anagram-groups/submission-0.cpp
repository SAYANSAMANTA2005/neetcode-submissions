class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;
        for(auto it:strs){
            auto i=it;
            sort(it.begin(),it.end());
            mp[it].push_back(i);
        }
        vector<vector<string>>v;
        for(auto p:mp){
            v.push_back(p.second);
        }
        return v;
    }
};
