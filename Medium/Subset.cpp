class Solution {
     vector<vector<int> > ans;
public:
    void go(vector<int> path,vector<int>& nums,int start){
        if(start==nums.size()){
            ans.push_back(path);
            return;
        }
        go(path,nums,start+1);
        path.push_back(nums[start]);
        go(path,nums,start+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> path;
    go(path,nums,0);
        return ans;
    }
};
