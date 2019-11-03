class MedianFinder {
private:priority_queue<int> small;
        priority_queue<int, vector<int>, greater<int> > large;
public:

    void addNum(int num) {
        if(small.empty() &&large.empty()) {
            small.push(num);
            return;
        }
        double median=findMedian();
        if(num< median) {small.push(num);
            if(small.size()-large.size()>1){
               int temp=small.top();
               small.pop();
               large.push(temp);
            }
        }else{
            large.push(num);
            if(large.size()-small.size()>1){
               int temp=large.top();
               large.pop();
               small.push(temp);
            }
        }
        return;
        
    }

    // Returns the median of current data stream
    double findMedian() {
        if(small.empty() &&large.empty()) return 0;
        if(small.size()==large.size()){
            double m=small.top(),n=large.top();
            return (m+n)/2.0;
        }
        if(small.size()>large.size()) return (double)small.top();
        else 
            return (double)large.top();
    }
};
