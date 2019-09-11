class Solution {
public:
    int findPeakElement(vector<int>& nums) {
     int ret=-1;
     for(int i=0;i<nums.size();i++){
        if(i+1<nums.size()){
            if(nums[i+1]>nums[i])
                continue;
        }
        if(i-1>=0){
            if(nums[i-1]>nums[i])
                continue;
        }
        ret=i;
     }
      return ret;
    }
};
