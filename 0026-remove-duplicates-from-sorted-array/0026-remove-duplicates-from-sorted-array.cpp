class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int check = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[check]){
              check++;
              nums[check] = nums[i];  
            }
        }
        return check + 1;
    }
};