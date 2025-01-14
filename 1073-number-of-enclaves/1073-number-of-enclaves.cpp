class Solution {
public:
    void DFS(vector<vector<int>>& v1, int i, int j){
        if(i < 0 || j < 0 || i == v1.size() || j == v1[0].size() || v1[i][j] != 1) return;
        v1[i][j] = 0;
        DFS(v1, i + 1, j), DFS(v1, i - 1, j), DFS(v1, i, j + 1), DFS(v1, i, j - 1);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(i * j == 0 || i == grid.size() - 1 || j == grid[0].size() - 1) DFS(grid, i, j);
            }
        }

        int res = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                res += grid[i][j];
            }
        }

        return res;
    }
};