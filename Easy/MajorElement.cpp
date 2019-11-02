class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int  major= nums[0];
        int cnt=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==major)
                cnt++;
            else
                cnt--;
            if(cnt<0){
                cnt=1;
                major=nums[i];
            }
        }
        return major;
    }
};
