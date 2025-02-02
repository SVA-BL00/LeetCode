class Solution {
public:
    bool check(vector<int>& nums) {
        bool rot = false;
        for(int i = 0; i < nums.size() -1; i++){
            if(nums[i] > nums[i+1] && !rot){
                rot = true;
            }else if(nums[i] > nums[i+1] && rot){
                return false;
            }
        }

        if(rot && nums[nums.size()-1] > nums[0]) return false;
        return true;
    }
};