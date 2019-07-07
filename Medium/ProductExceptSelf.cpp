class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total=1;
        int cnt=0;
        int acc[nums.size()];
        vector<int> output;
        acc[0]=1;
        output.push_back(0);
        for(int i=1;i<nums.size();i++){
          acc[i]=  nums[i-1]*acc[i-1];
          output.push_back(0);
        }
        int accum=1;
        for(int i=nums.size()-1;i>=0;i--){
            output[i]=acc[i]*accum;
            accum*=nums[i];
        }
        return output;
    }
};
//without using division operator and complexity O(n)
