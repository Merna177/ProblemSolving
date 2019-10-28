class Solution {
public:
    void sortColors(vector<int>& nums) {
        priority_queue<int>q;
        for(int i=0;i<nums.size();i++)
            q.push(-1*nums[i]);
        for(int i=0;i<nums.size();i++){
            nums[i]=-1*q.top();
            q.pop();
        }
    }
};
