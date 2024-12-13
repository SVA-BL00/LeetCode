#include <unordered_map>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> numVal;
        for(int i = 0; i < nums.size(); i++){
            if(numVal.find(nums[i]) == numVal.end()){
                numVal[nums[i]] = 1;
            }else{
                numVal[nums[i]]++;
            }
        }
        pair<int, int> biggest = {-1, -1};
        for(auto i : numVal){
            if(biggest.second < i.second){
                biggest = i;
            }
        }

        return biggest.first;
    }
};