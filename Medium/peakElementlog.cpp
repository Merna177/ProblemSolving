class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       //binary search if mid in ascending order ,then peak in the right
       //if mid in descending order, then peak in the left
   
       int left=0,right=nums.size()-1;
       int mid;
       while(left<=right){
           mid = (left+right)/2;
          if((mid ==0 || nums[mid-1]<nums[mid])&&(mid==nums.size()-1|| nums[mid+1]<nums[mid]))
                return mid;
           else if((mid!=0 && nums[mid-1]<= nums[mid] )|| (mid!=nums.size()-1 && nums[mid]<=nums[mid+1]))
               left = mid+1;
           else
               right = mid;
           
           
       }
      return 0;
    }
};
