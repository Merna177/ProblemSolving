//Medium
// solve-->https://leetcode.com/problems/minimum-falling-path-sum/ 
class Solution {
public:
    int dp[101][101];
    int minFallingPathSum(vector<vector<int>>& A) {
        int value=1e9;
        memset(dp,-1,sizeof dp);
       for(int i=0;i<A[0].size();i++){
          value = min(value,go(0,i,A));
       }
      return value;
    }
    int go(int row,int column,vector<vector<int>>& A){
        if(row>=A.size() )return 0;
        if(column >= A[0].size())return 1e9;
        if(dp[row][column]!=-1)return dp[row][column];
        int first = A[row][column]+go(row+1,column+1,A);
        int second = A[row][column]+go(row+1,column-1,A);
        int third = A[row][column]+go(row+1,column,A);
        return dp[row][column]=min(first,min(second,third));
    }
};
