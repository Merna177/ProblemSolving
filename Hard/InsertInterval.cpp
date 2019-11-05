class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int i=0;
    vector<vector<int>> res;
    if(intervals.size()==0){
        res.push_back(newInterval);
        return res;
    }
    // add all the intervals ends before newInterval.start to result
    while (i < intervals.size() && intervals[i][1] < newInterval[0]) {
      res.push_back(intervals[i]);
      i++;
    }
    int start,ed;
    // expand newInterval maybe
    if (i < intervals.size() && intervals[i][1]>=newInterval[0] ) start = min(newInterval[0], intervals[i][0]);
    else
        start = newInterval[0];
    while (i < intervals.size()&& intervals[i][0] <= newInterval[1]) i++;
    
    if (i - 1 >= 0 && intervals[i-1][0]<=newInterval[1]) ed = max(intervals[i-1][1], newInterval[1]);
        else
            ed = newInterval[1];
    res.push_back({start, ed});

    // add all the intervals starts after newInterval.end to result
    while (i < intervals.size()) {
      res.push_back(intervals[i]);
      ++i;
    }

    return res;
    }
};
