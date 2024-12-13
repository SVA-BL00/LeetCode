class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxF = 0;
        int localMax = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                localMax++;
                maxF = max(maxF, localMax);
            }else{
                localMax = 0;
            }
        }
        
        return maxF;
    }
};