class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size() < 3){
            return vector<vector<int>>();
        }
        
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        
        for(int i = 0; i < nums.size() - 2; i++){
            if(i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            
            int first = i + 1;
            int second = nums.size() - 1;
            
            while(first < second){
                int sum = nums[i] + nums[first] + nums[second];
                if(sum == 0){
                    result.push_back({nums[i], nums[first], nums[second]});
                    while(first < second && nums[first] == nums[first + 1]){
                        first++;
                    }
                    while(first < second && nums[second] == nums[second - 1]){
                        second--;
                    }
                    first++;
                    second--;
                }else if(sum > 0){
                    second--;
                }else{
                    first++;
                }
            }
        }
        
        return result;
    }
};