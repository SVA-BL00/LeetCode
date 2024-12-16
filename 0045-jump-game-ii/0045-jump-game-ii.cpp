class Solution {
public:
    int jump(vector<int>& nums) {
        int reach = 0;
        int jumps = 0;
        int farthest = 0;

        for(int i = 0; i < nums.size() - 1; i++){
            farthest = max(nums[i] + i, farthest);
            if(i == reach){
                jumps++;
                reach = farthest;
            } 
        }

        return jumps;
    }
};