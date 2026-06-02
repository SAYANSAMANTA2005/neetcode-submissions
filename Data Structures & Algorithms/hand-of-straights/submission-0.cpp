class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int>elements;
        int n=hand.size();
        for (int i=0;i<n;i++)elements[hand[i]]++;//.push_back(hand[i]);
        while(!elements.empty()){
            auto [u,v]=*elements.begin();
            for(int i=u;i<u+groupSize;i++){
             if(elements[i]==0)return false;

             elements[i]--;
            if(elements[i]==0)elements.erase(i);
            }
            

            
        }
        return true;


    }
};
/*
 hand = [1,2,2,2,3,3,3,4,4,4,5,5,5,6], groupSize = 4
     
     currsmall ->1 
     check presence of 
     [1,2,3,4]

     [5,6]


     currsmall ->2
     check presence of 
     [2,3,4,5]

*/