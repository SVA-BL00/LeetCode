class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majEl = INT_MAX;
        int votes = 0;
        for(int i = 0; i < nums.size(); i++){
            if(votes == 0){
                majEl = nums[i];
                votes++;
            }else if(nums[i] == majEl){
                votes++;
            }else{
                votes--;
            }
        }

        return majEl;
    }
};