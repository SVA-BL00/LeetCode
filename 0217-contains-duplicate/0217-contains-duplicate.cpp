class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> found;
        for(int i = 0; i < nums.size(); i++){
            if(found.insert(nums[i]).second == 0) return true;
        }

        return false;
    }
};