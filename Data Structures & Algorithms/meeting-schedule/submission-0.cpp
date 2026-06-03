/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
   
    bool canAttendMeetings(vector<Interval>& intervals) {
     int n=intervals.size();
     sort(intervals.begin(),intervals.end(),[](Interval I1,Interval I2){
     return I1.start<I2.start;
     });
    // vector<int>curr=intervals.start;
     for(int i=1;i<n;i++){
        if(intervals[i].start<intervals[i-1].end)return 0;
        
     }     
     return 1;
    }
};
