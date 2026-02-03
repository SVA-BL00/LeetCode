class Solution:
    def isTrionic(self, nums: List[int]) -> bool:
        if nums[0] >= nums[1]: return False

        count = 1
        for i in range(2, len(nums)):
            if nums[i-1] == nums[i]: return False
            if (nums[i - 2] - nums[i - 1]) * (nums[i - 1] - nums[i]) < 0:
                count += 1
        return count == 3