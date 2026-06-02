class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int x=target[0],y=target[1],z=target[2];
        int n=triplets.size();
        int cntx=0,cnty=0,cntz=0;
        for(int i=0;i<n;i++){
            if(x==triplets[i][0] && y>=triplets[i][1] && z>=triplets[i][2])cntx++;
            if(x>=triplets[i][0] && y==triplets[i][1] && z>=triplets[i][2])cnty++;
            if(x>=triplets[i][0] && y>=triplets[i][1] && z==triplets[i][2])cntz++;
        }
        return cntx&& cnty&&cntz;
    }
};
