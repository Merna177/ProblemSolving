class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int start=0;
        int ed=-1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                start=i-1;
                break;
            }
        }
        for(int j=nums.size()-2;j>=0;j--){
            if(nums[j]>nums[j+1]){
                ed=j+1;
                break;
            }
        }
        if(ed==-1 )return 0;
        int minVal = nums[start];
        int maxVal = nums[start];
        
        for(int i=start; i<=ed; i++)
        {
            if(nums[i] < minVal)
                minVal = nums[i];
            if(nums[i] > maxVal)
                maxVal = nums[i];
        }
        for(int i=0; i<start; i++)
        {
            if(nums[i] > minVal){
                start = i;
                break;
            }
        }
        
        for(int i=ed; i<nums.size(); i++)
        {
            if(nums[i] < maxVal)
                ed = i;
        }
      
        return ed-start+1;
    }
};
