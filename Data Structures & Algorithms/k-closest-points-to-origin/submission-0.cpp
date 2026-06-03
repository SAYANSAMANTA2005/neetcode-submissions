class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>>pq;
        vector<vector<int>>ans;
        for(auto v:points){
            int x=v[0],y=v[1];
            pq.push({x*x+y*y,{x,y}});
            if(pq.size()>k)pq.pop();
        }
        while(!pq.empty()){
            auto [it,v]=pq.top();
            int x=v.first,y=v.second;
           ans.push_back({x,y});
           pq.pop();
        }
        return ans;
    }
};
