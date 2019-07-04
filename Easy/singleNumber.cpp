class Solution {
public:
//i have to implement this problem in linear time & without using extra memory so i have to use XOR
    int singleNumber(vector<int>& nums) {
        int value = nums[0];
        for(int j=1;j<nums.size();j++){
            value = value ^ nums[j];
        }
        return value;
    }
};
