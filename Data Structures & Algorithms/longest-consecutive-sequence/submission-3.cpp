class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size(),mx=0;
        unordered_map<int,int>ans;//
       
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

 /*
        Claude's solution & Outstanding Explanation 
        
        int longestConsecutive(vector<int>& nums) {
        // Step 1: Insert all elements into a hash set
        unordered_set<int> numSet(nums.begin(), nums.end());
        
        int longest = 0;
        
        for (int num : numSet) {
            // Step 2: Only start counting if 'num' is the START of a sequence
            // i.e., num-1 does NOT exist in the set

            if (numSet.find(num - 1) == numSet.end()) {
                int length = 1;
                
                // Step 3: Expand the sequence as far as possible
                while (numSet.find(num + length) != numSet.end()) {
                    length++;
                }
                
                // Step 4: Update the global maximum
                longest = max(longest, length);
            }
        }
        
        return longest;
    }

        */
