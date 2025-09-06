class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """

        map_nums = {}

        for i in range(len(nums)):
            if nums[i] in map_nums:
                return [i, map_nums[nums[i]]]
            subs = target - nums[i]
            map_nums[subs] = i