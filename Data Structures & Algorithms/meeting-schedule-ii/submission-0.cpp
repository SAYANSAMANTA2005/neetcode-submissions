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
    int minMeetingRooms(vector<Interval>& intervals) {
        int n=intervals.size();
      vector<int>start,end;
      for(auto x:intervals){
      start.push_back(x.start);
      end.push_back(x.end);
      }
      sort(start.begin(),start.end());
      sort(end.begin(),end.end());
      int i=0,j=0,current=0,maxMeeting=0;
      while(i<n && j<n){
       
        if(start[i]<end[j]){
       current++;
       i++;
        }
        else if(start[i]>end[j]){
            current--;
            j++;
        }
        else if(start[i]==end[j]){
            j++;
            current--;
          }

        maxMeeting=max(maxMeeting,current);
      }
      return maxMeeting;
    }
};
