class MinStack {
public:
  stack<int>st;
  stack<int>mn;
    MinStack() {
        
    }
    
    void push(int val) {
        if(mn.empty()||(!mn.empty() &&mn.top()>=val))
        /* remember if -->mn.top()>=val  chnaged to        
        mn.top()>val  this will give Runtime error
        */
        mn.push(val);
        st.push(val);

    }
    
    void pop() {
        if(!mn.empty() &&st.top()==mn.top())mn.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mn.top();
    }
};
