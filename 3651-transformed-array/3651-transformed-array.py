class Solution:
    def constructTransformedArray(self, nums: List[int]) -> List[int]:
        n = len(nums)
        res = [0] * n
        for i in range(n):
            j = i
            if nums[i] > 0:
                j = (i + nums[i]) % n
            elif nums[i] < 0:
                j = (n+i+ nums[i] % n) %n
            res[i] = nums[j]
        return res