class Solution {
public:
int arrayNesting(vector<int>& nums) {
        int visited[nums.size()];
        memset(visited,0,sizeof visited);
        int ret=0;
        for(int i=0;i<nums.size();i++){
            int pos = i;
            int cnt=0;
            while(!visited[pos]){
                cnt++;
                visited[pos]=1;
                pos = nums[pos];
            }
            ret=max(ret,cnt);
        }
    return ret;
    }
};
  
