class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int cnt=0;
        int flag=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
               if(grid[i][j]=='0' || grid[i][j]=='#')continue;
                cnt++;
                dfs(i,j,grid);
                
        } 
       
    }
        return cnt;
    }
    void dfs(int i,int j,vector<vector<char>>& grid ){
        grid[i][j]='#';
        if(i-1>=0 && grid[i-1][j]=='1')dfs(i-1,j,grid);
        if(j-1>=0 && grid[i][j-1]=='1')dfs(i,j-1,grid);
        if(i+1<grid.size() && grid[i+1][j]=='1')dfs(i+1,j,grid);
        if(j+1<grid[i].size() && grid[i][j+1]=='1')dfs(i,j+1,grid);
    }
};
