class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int mn=A[0];
        int mx=A[0];
        for(int i=1;i<A.size();i++){
            if(A[i] > mx)mx = A[i];
            if(A[i]< mn)mn=A[i];
        }
        int diff = mx-mn;
        int smallest = mn+ min(K,diff);
        diff = mx-smallest;
        int biggest  = mx- min(K,diff);
        return biggest - smallest;
    }
};
