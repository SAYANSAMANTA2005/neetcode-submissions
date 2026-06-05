class Solution {
   public:
    stack<int> st;
    int evalRPN(vector<string>& tokens) {
        for (auto x : tokens) {
            if (x == "+" || x == "-" || x == "*" || x == "/") {  // operator
                // if(st.size()<2)
                // st.size()>=2 must be

                    auto b = st.top();
                    st.pop();
                    auto a = st.top();
                    st.pop();
                    int c=0;
                    if (x == "+") c = a + b;
                    if (x == "-") c = a - b;
                    if (x == "*") c = a * b;
                    if (x == "/" ) c = a / b;
                    st.push(c);
            } else  // x--> integer
                st.push(stoi(x));
        }
        return st.top();
    }
};
