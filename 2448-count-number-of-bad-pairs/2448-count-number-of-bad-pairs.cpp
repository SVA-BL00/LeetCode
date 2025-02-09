class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int> map;
        long long n = nums.size();
        long long count = 0;
        for(int i = 0; i < n; i++){
            count += map[i-nums[i]]++;
        }

        return (n*(n-1))/2- count;
    }
};