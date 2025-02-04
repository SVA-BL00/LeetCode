class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum = 0, localSum = 0;
        for(int i = 0; i < nums.size(); i++){
            localSum += nums[i];
            if(i+1 >= nums.size() || nums[i + 1] <= nums[i]){
                maxSum = max(maxSum, localSum);
                localSum = 0;
            }
        }

        return maxSum;
    }
};