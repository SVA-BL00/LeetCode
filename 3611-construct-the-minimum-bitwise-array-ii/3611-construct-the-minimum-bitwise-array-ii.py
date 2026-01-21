class Solution:
    def minBitwiseArray(self, nums: List[int]) -> List[int]:
        for i in range(len(nums)):
            temp = -1
            d = 1
            while (nums[i] & d) != 0:
                temp = nums[i] -d
                d <<= 1
            nums[i] = temp
        return nums