class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int, int> seen;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                seen[nums[i] * nums[j]]++;
            }
        }

        int valid = 0;
        for(auto& i: seen){
            int times = i.second;
            valid += (times*(times-1)) / 2;
        }

        return valid * 8;
    }
};