class Solution {
   vector<int> nums1;
public:
    Solution(vector<int>& nums) {
       nums1=nums; 
    }
    
    int pick(int target) {
       vector<int> givens;
       for(int i=0;i<nums1.size();i++){
           if(nums1[i]==target)givens.push_back(i);
       }
        return givens[rand()%givens.size()];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */
