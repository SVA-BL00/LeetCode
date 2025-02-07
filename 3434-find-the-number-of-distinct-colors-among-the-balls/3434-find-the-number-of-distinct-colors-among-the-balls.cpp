class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int,int> balls;
        unordered_map<int,int> colorCount;
        unordered_set<int> colors;
        vector<int> result;
        for(int i = 0; i < queries.size(); i++){
            int ball = queries[i][0];
            int color = queries[i][1];
            if(balls.count(ball)){
                int old = balls[ball];
                colorCount[old]--;
                if(colorCount[old] == 0) colors.erase(old);
            }

            balls[ball] = color;
            colorCount[color]++;
            colors.insert(color);
            result.push_back(colors.size());
        }

        return result;
    }
};