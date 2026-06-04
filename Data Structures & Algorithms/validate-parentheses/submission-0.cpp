class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        vector<char>open={'(','{','['},close={')','}',']'};
        for(auto ch:s){
            if(ch=='('||ch=='{'||ch=='[')st.push(ch);
            else {//ch--> closing bracket
                if(st.empty())return 0;
                auto x=st.top();
                if(x==open[0] ) {if(ch!=close[0])return 0 ;}
                else if(x==open[1] ) {if(ch!=close[1])return 0 ;}
                else if (x==open[2] ) {if(ch!=close[2])return 0 ;}




                else//x-->closing brcaket
                return 0;
                st.pop();
            }
        }
        if(st.empty())return 1;
        return 0;
        //return st.empty()==true;// if it is empty then yes
    }
};
