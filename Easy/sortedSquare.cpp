class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        for(int i=0;i<A.size();i++)
            if(A[i]<0)A[i]=-1*A[i];
        sort(A.begin(),A.end());
        vector<int> square;
        for(int i=0;i<A.size();i++)
            square.push_back(A[i]* A[i]);
        return square;
    }
};
