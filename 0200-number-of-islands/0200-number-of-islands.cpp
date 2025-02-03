class Solution {
public:
    // First submission used a second matrix to check for seen parts of the island.
    // Memory could be O(1) if the chars are changed directly to 0.
    // My second attempt:
    void findIsland(vector<vector<char>>& grid, int i, int j){
        if(grid[i][j] == '0') return;
        grid[i][j] = '0';
        if(i+1 < grid.size()) findIsland(grid, i+1, j);
        if(j+1 < grid[0].size()) findIsland(grid, i, j+1);
        if(i-1 >= 0) findIsland(grid, i-1, j);
        if(j-1 >= 0) findIsland(grid, i, j-1);
    }

    int numIslands(vector<vector<char>>& grid) {
        int res = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == '0'){
                    continue;
                }else{
                    findIsland(grid, i, j);
                    res++;
                }
            }
        }
        return res;
    }
};