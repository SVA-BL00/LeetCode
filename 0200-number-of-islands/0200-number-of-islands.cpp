class Solution {
public:
    void findIsland(vector<vector<char>>& grid, vector<vector<bool>>& seen, int i, int j){
        if(grid[i][j] == '0' || seen[i][j] == true) return;
        seen[i][j] = true;
        if(i+1 < grid.size()) findIsland(grid, seen, i+1, j);
        if(j+1 < grid[0].size()) findIsland(grid,seen, i, j+1);
        if(i-1 >= 0) findIsland(grid, seen, i-1, j);
        if(j-1 >= 0) findIsland(grid, seen, i, j-1);
    }

    int numIslands(vector<vector<char>>& grid) {
        vector<vector<bool>> seen(grid.size(), vector<bool>(grid[0].size(), false));
        int res = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(seen[i][j] || grid[i][j] == '0'){
                    continue;
                }else{
                    findIsland(grid, seen, i, j);
                    res++;
                }
            }
        }
        return res;
    }
};