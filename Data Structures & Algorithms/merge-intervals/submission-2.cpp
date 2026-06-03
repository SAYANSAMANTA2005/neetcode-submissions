class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<int>curr=intervals[0];
        vector<vector<int>>ans;ans.push_back(curr);
        for(int i=1;i<n;i++){
            if(curr[1]<intervals[i][0])ans.push_back(intervals[i]);
            if(curr[1]>=intervals[i][0]){
                ans.pop_back();
                ans.push_back({curr[0],max(curr[1],intervals[i][1])});
            }
            curr=ans.back();

        }
        return ans;
    }
};
