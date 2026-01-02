class Solution:
    def repeatedNTimes(self, nums: List[int]) -> int:
        set_nums = set()
        for i in range(len(nums)):
            if nums[i] not in set_nums:
                set_nums.add(nums[i])
            else:
                return nums[i]
