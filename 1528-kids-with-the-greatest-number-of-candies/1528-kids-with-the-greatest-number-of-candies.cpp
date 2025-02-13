class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        for(int i = 0; i < candies.size(); i++){
            int current_max = *max_element(candies.begin(), candies.end());
            int hip = candies[i] + extraCandies;
            res.push_back(hip >= current_max);
        }

        return res;
    }
};