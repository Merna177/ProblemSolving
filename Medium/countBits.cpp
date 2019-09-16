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
///faster solution
   public int[] countBits(int num) {
        int[] res = new int[num+1];
        int next = 2;
        int prev = 0;
        res[0] = 0;
        for (int i=1; i<=num; i++) {
            if (i==next) {
                res[i] = 1;
                prev = next;
                next = next*2;
            } else {
                res[i] = 1+res[i-prev]; 
            }
        }
        return res; 
    }
