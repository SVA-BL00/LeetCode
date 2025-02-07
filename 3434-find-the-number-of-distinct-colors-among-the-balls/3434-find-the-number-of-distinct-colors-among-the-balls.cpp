class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int,int> balls;
        unordered_set<int> colors;
        vector<int> result;
        for(int i = 0; i < queries.size(); i++){
            int ball = queries[i][0];
            int color = queries[i][1];
            if(balls.count(ball)){
                int old = balls[ball];
                bool isUsed = false;
                for(auto& i: balls){
                    if(i.second == old && i.first != ball){
                        isUsed = true;
                    }
                }
                if(!isUsed) colors.erase(old);
            }

            balls[ball] = color;
            colors.insert(color);
            result.push_back(colors.size());
        }

        return result;
    }
};