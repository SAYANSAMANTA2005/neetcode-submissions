class Solution {
public:
// next greater element index 
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>st;
        int n=temperatures.size();
        vector<int>result(n,0);
        for(int i=0;i<n;i++){
            
                while(!st.empty() && temperatures[i]>temperatures[st.top()]){
                    result[st.top()]=i-st.top();
                    st.pop();
                }
                //now temp[i]<temperatues[st.top()]
                st.push(i);
              
        }
        return result;
    }
};
