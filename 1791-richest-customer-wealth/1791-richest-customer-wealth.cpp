class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int richestSum = 0;
        for(int i = 0; i < accounts.size(); i++){
            int localSum = 0;
            for(int j = 0; j < accounts[0].size(); j++){
                localSum += accounts[i][j];
            }
            richestSum = max(localSum, richestSum);
        }

        return richestSum;
    }
};