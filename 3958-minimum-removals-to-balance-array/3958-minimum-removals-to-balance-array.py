class Solution:
    def minRemoval(self, nums: List[int], k: int) -> int:
        nums.sort()
        n = len(nums)
        i = 0
        max_len = 1
        for j in range(n):
            while nums[j] > k * nums[i]:
                i+= 1
            max_len = max(max_len, j-i+1)
        return n - max_len
