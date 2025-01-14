#include <unordered_map>
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int, int> map;
        vector<int> res;
        for(int i = 0; i < A.size(); i++){
            map[A[i]]++;
            map[B[i]]++;

            int known = 0;
            for(const auto pair : map){
                if(pair.second >= 2){
                    known++;
                }
            }
            res.push_back(known);
        }
        return res;
    }
};