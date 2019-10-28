class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        sort(timeSeries.begin(),timeSeries.end());
        int start=0;
        int len=0;
        for(int i=0;i<timeSeries.size();i++){
            len+=min(duration, (timeSeries[i]+duration)-start);
            start= timeSeries[i]+duration;
        }
        return len;
    }
};
