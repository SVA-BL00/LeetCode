class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        for(int i = 1; i < m; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] != 0){
                    mat[i][j] += mat[i - 1][j];
                }
            }
        }

        int count = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] == 0) continue;
                int minValid = mat[i][j];
                for(int k = j; k < n; k++){
                    if(mat[i][k] == 0) break;
                    minValid = min(minValid, mat[i][k]);
                    count += minValid;
                }
            }
        }

        return count;
    }
};