#include <queue>
class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(int i = 0; i < nums.size(); i++){
            pq.push({nums[i], i});
        }

        for(int i= 0; i < k; i++){
            auto top = pq.top();
            nums[top.second] *= multiplier;
            pq.pop();
            pq.push({nums[top.second], top.second});
        }

        return nums;
    }
};