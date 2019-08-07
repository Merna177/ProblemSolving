class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int row[grid.size()];
        int col[grid[0].size()];
        memset(row,0,sizeof row);
        memset(col,0,sizeof col);
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                row[i]=max(row[i],grid[i][j]);
                col[j]=max(col[j],grid[i][j]);
                
            }
        }
        int cnt=0,add=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                add=min(row[i],col[j]);
                cnt+=max(0,(add-grid[i][j]));
            }
        }
        return cnt;
    }
};
