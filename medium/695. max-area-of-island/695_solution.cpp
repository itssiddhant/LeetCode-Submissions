class Solution {
    private:
    int aoi(vector<vector<int>>& grid, int i, int j){
        if(i>=0 && i<grid.size() && j>=0 && j<grid[0].size() && grid[i][j]==1){
            grid[i][j]=0;
            return 1 +aoi(grid,i+1,j)+aoi(grid,i-1,j)+aoi(grid,i,j+1)+aoi(grid,i,j-1);
        }
        return 0;
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if(grid.empty() || grid[0].empty())return 0;
        int maxarea = 0;
        for(int i=0; i<grid.size(); i++){
            for(int j =0; j<grid[0].size(); j++){
                if(grid[i][j]==1){
                maxarea=max(maxarea,aoi(grid,i,j));
                }
            }
        }
        return maxarea;
    }
};