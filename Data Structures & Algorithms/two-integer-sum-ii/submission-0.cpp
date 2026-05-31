class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int,int>f;vector<int>v;int n=numbers.size();
        for(int i=0;i<n;i++){
            if(f.count(target-numbers[i]))v={f[target-numbers[i]]+1,i+1};
            f[numbers[i]]=i;
            
        }//
        return v;
    }
};
