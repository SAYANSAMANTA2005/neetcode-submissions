class Solution {
public:
   map<int,int>freq;
   vector<int>ans;
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int l=0,r=0;
        while(r<nums.size()){
            freq[nums[r]]++;
            while((r-l+1)>k){
                freq[nums[l]]--;
                if(freq[nums[l]]==0)freq.erase(nums[l]);
                l++;
            }
            if(r-l+1==k){
             ans.push_back(freq.rbegin()->first);
            }



            r++;
        }
        return ans;
    }
};
