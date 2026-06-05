class Solution {
public:
   bool checker(vector<int>&piles,long long h,long long rate){
    long long n=piles.size();
    long long hour=0;
    for(long long i=0;i<n;i++){
        hour+=(piles[i]+rate-1)/rate;
    }
    return hour<=h;
   }
    long long minEatingSpeed(vector<int>& piles, int h) {
        long long l=1,r=1e15,ans=-1;
        while(l<=r){
            long long m=(l+r)/2;
            if(checker(piles,h,m)){
                ans=m;
                r=m-1;
            }
            else l=m+1;

        }
        return (int)ans;
    }
};
