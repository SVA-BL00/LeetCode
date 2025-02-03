class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>> results;
        for(int i = 0; i < points.size(); i++){
            int dist = points[i][0] * points[i][0] + points[i][1] * points[i][1];
            results.push({dist, points[i]});

            if(results.size() > k){
                results.pop();
            }
        }

        vector<vector<int>> res;
        while(!results.empty()){
            res.push_back(results.top().second);
            results.pop();
        }

        return res;
    }
};