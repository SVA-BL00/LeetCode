class Solution:
    def minBitwiseArray(self, nums: List[int]) -> List[int]:
        ans = []
        for i in range(len(nums)):
            temp = -1
            for j in range(1, nums[i]):
                if j | (j+1) == nums[i]:
                    temp = j
                    break
            ans.append(temp)
        return ans
            