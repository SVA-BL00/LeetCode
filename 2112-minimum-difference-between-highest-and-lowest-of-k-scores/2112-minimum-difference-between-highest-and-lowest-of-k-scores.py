class Solution:
    def minimumDifference(self, nums: List[int], k: int) -> int:
        nums.sort()
        i = 0
        j = k-1
        min_dif = float('inf')
        while j < len(nums):
            local_min = nums[j] - nums[i]
            min_dif = min(min_dif, local_min)
            i += 1
            j += 1
        
        return min_dif