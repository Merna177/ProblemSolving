class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans;
        for(int i=0;i<=num;i++){
           ans.push_back(bitset<32>(i).count());

        }
        return ans;
    }
};
