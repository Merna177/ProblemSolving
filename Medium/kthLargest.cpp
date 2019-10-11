class Solution {
public:
int findKthLargest(vector<int>& nums, int k) {
    
    std::priority_queue<int> pq;
    
    for(int i = 0;i<k;++i)
    {
        pq.push(-1*nums[i]);
    }
    for(int i=k;i<nums.size(); ++i)
    {
        if(nums[i] > -1*pq.top())
        {
            pq.pop();
            pq.push(-1*nums[i]);
        }
    }
    
    return -1*pq.top();
    
}};
