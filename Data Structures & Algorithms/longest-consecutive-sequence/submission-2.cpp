class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size(),mx=0;
        unordered_map<int,int>ans;//
        /*
        ans[ele]--> stores max lcs lenth of which largeest element of sequence = ele 
        */
        for(auto it:nums)ans[it]=1;
        for(auto [y,v]:ans){
            int x=y;
            if(!ans.count(x-1)){// starting element of a consequitive sequence
                
                int len=1;
                while(ans.count(x+1)){
                    len++;
                    x++;

                }
            
            mx=max(mx,len);
            }
        }
        return mx;


    }
};
