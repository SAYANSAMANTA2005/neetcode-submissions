class Solution {
public:
    bool isHappy(int n) {
        map<int,int>vis;
        while(!vis[n]){
            vis[n]=1;
            if(n==1)return 1;
        int digit_sum=0;
        while(n){
            digit_sum+=(n%10)*(n%10);
            n/=10;
        }
        n=digit_sum;
        }
        return 0;
    }
};
