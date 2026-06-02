class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size(),sum=0,mn=1e9;
        for(int i=0;i<n;i++)gas[i]-=cost[i];
         for(int i=0;i<n;i++)cost[i]=gas[i];
         for(int i=0;i<n;i++){sum+=gas[i];mn=min(sum,mn);}
         for(int i=0;i<n;i++){sum+=cost[i];mn=min(sum,mn);}
         // now gas [i]--> prefgas[i]
         sum=0;
         for(int i=0;i<n;i++){sum+=gas[i];
         if(sum==mn &&((i+1<n &&gas[i+1]>=0 )||(i+1==n && cost[0]>=0)) )return (i+1)%n;
         }
        // for(int i=0;i+1<n;i++){sum+=cost[i];if(sum==mn && cost[i+1]>=0)return i+1;
        // }
         return -1;

    
    }
};
/*
gas[i]-cost[i]--> amount of fuel reamins after reaching next station

starting node should have gas[i]-cost[i]>=0

  for(k=i to j)sum gas[k] - sum cost[k]

  prefgas[j]-prefgas[i-1]>=0 for all j 

*/