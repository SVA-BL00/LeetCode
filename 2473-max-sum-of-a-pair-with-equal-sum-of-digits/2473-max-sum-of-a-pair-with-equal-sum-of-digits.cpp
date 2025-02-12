class Solution {
public:
    int getSum(int num){
        int res = 0;
        while(num > 0){
            int digit = num % 10;
            num /= 10;
            res += digit;
        }
        return res;
    }

    int maximumSum(vector<int>& nums) {
        unordered_map<int, vector<int>> allSum;
        int ans = -1;
        for(int i = 0; i < nums.size(); i++){
            int sum = getSum(nums[i]);
            allSum[sum].push_back(nums[i]);
        }

        for(auto& i: allSum){
            if(i.second.size() > 1){
                sort(i.second.begin(), i.second.end());
                ans = max(ans, i.second[i.second.size() - 2] + i.second[i.second.size() - 1]);
            }
        }

        return ans;
    }
};