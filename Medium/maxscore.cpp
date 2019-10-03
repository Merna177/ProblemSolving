class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& A) {
        int ans = 0, mx = 0;
        for(int i = 0; i < A.size(); ++i) {
            ans = max(ans, mx + A[i] - i);  
            mx = max(mx, A[i] + i);
        }
        return ans;
    }
};
