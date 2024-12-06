#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> checked;
        for(int i = 0; i < nums.size(); i++){
            int need = target - nums[i];
            if(checked.find(need) == checked.end()){
                checked[nums[i]] = i;
            }else{
                return vector<int>{i, checked[need]};
            }
        }
        return vector<int>{};
    }
};