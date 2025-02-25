class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long count = 0, prefixSum = 0;
        for(long long i = 0; i < arr.size(); i++){
            prefixSum += arr[i];
            count += prefixSum % 2;
        }

        count += (arr.size() - count) * count;
        return count % 1000000007;
    }
};