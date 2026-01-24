class Solution:
    def minPairSum(self, nums: List[int]) -> int:
        ans = []
        nums.sort()
        length = len(nums) // 2
        j = len(nums) - 1
        for i in range(length):
            local_sum = nums[i] + nums[j]
            ans.append(local_sum)
            j -= 1
        return max(ans)
            