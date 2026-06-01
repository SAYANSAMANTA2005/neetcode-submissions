class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n=digits.size(),curr=0,carry=1;
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--){
            carry+=digits[i];
             ans[i]=carry%10;
            carry/=10;
           
        }
        if(carry)ans.insert(ans.begin(),carry);
        return ans;

    }
};
