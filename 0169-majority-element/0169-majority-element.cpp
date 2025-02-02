class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> numVal;
        for(int i = 0; i < nums.size(); i++){
            numVal[nums[i]]++;
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