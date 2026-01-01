class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        max_ones = 0
        potential = 0
        for i in range(len(nums)):
            if nums[i] == 1:
                potential += 1
            else:
                potential = 0
            max_ones = max(max_ones, potential)
        return max_ones

        