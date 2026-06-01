class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)return 1.0;
        if(n<0) return myPow(1.0/x,abs(n));
        double res=myPow(x,n/2);
        res=res*res;
        if(n%2)res*=x;
        return res;
    }
};
