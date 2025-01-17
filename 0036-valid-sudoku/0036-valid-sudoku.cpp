#include <unordered_set>
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Check columns
        for(int i = 0; i < 9 ; i++){
            unordered_set<char> column;
            for(int j = 0; j < 9; j++){
                if(board[j][i] == '.'){
                    continue;
                }
                auto check = column.insert(board[j][i]);
                if(!check.second){
                    return false;
                }
            }
        }

        // Check rows
        for(int i = 0; i < 9 ; i++){
            unordered_set<char> rows;
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.'){
                    continue;
                }
                auto check = rows.insert(board[i][j]);
                if(!check.second){
                    return false;
                }
            }
        }

        // Check blocks
        for(int k = 0; k <= 6; k+= 3){
            for(int l = 0; l <= 6; l+= 3){
                unordered_set<char> blocks;
                for(int i = k; i < k+3; i++){
                    for(int j = l; j < l+3; j++){
                        if(board[i][j] == '.'){
                            continue;
                        }
                        auto check = blocks.insert(board[i][j]);
                        if(!check.second){
                            return false;
                        }
                    }
                }
            }
        }

        return true;
    }
};