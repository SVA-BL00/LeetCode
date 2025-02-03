class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if(nums.size() == 1) return 1;
        int longest = 0, dec = 0, inc = 0;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i+1] > nums[i]){
                longest = max(longest, dec);
                dec = 0;
                if(inc == 0){
                    inc += 2;
                }else{
                    inc++;
                }
            }else if(nums[i+1] < nums[i]){
                longest = max(longest, inc);
                inc = 0;
                if(dec == 0){
                    dec += 2;
                }else{
                    dec++;
                }
            }else{
                longest = max({longest, inc, dec});
                dec = 0, inc = 0;
                longest = max(longest, 1);
            }
        }

        longest = max({longest, inc, dec});
        return longest;
    }
};