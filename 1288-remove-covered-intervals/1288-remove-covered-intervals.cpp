class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
      sort(intervals.begin(),intervals.end(),[](auto &a,auto &b){if(a[0]==b[0]) return a[1]>b[1]; return a[0]<b[0];}) ; 
      int max=0;
      int count=0;
      for (auto &it:intervals){
        if(it[1]>max){
            max=it[1];
            count++;
        }
      }
      return count;
    }
};