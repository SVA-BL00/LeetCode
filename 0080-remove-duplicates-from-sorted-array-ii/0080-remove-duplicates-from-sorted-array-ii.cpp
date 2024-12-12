class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        int twoCount = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[count] && twoCount < 1){
                twoCount++;
                count++;
                nums[count] = nums[i];
            }else if(nums[i] != nums[count]){
                count++;
                nums[count] = nums[i];
                twoCount = 0;
            }
        }
        return count + 1;
    }
};