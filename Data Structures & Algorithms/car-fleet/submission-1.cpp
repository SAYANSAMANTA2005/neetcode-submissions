class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=speed.size();
        vector<pair<int,double>>car(n);
        stack<pair<int,double>>st;
        for(int i=0;i<n;i++){
            double time= (0.0+target-position[i])/speed[i];
            car[i]={position[i],time};

        }
        double currLeader_time=0.0;
        int leaders=0;
        sort(car.begin(),car.end(),greater<pair<int,double>>());
        for(int i=0;i<n;i++){
           if(st.empty()){
            st.push(car[i]);
            leaders++;
           }
           else{
            if(!st.empty()  && car[i].second>st.top().second){
                st.push(car[i]);
                leaders++;
            }
           }
        }
        return leaders;


       // stack<
    }
};
/*

 identifying the leaders of each car fleet
 ()

 time taking to reach target (if there weere onnly ith car)

 time[i]=(target-position[i])/speed[i];


[{7,1},{4,2},{1,2},{0,1}]


*/