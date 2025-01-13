class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int> answer;
        int m = grid.size();
        int n = grid[0].size();
        
        for(int i = 0; i < n; i++){
            int currCol = i;
            bool valid = true;
            for(int j = 0; j < m; j++){
                if((currCol + 1) <= n - 1 && grid[j][currCol] == 1 && grid[j][currCol+1] == 1){
                    currCol++;
                }else if((currCol - 1) >= 0 && grid[j][currCol] == -1 && grid[j][currCol-1] == -1){
                    currCol--;
                }else{
                    valid = false;
                    break;
                }
            }
            if(valid){
                answer.push_back(currCol);
            }else{
                answer.push_back(-1);
            }
        }
        return answer;
    }
};