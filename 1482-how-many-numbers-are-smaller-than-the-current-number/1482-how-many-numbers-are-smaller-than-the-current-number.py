class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        length = len(nums)
        ans = []
        for i in range(length):
            count = 0
            for j in range(length):
                if j == i: continue
                if nums[j] < nums[i]:
                    count +=1
            ans.append(count)
        return ans
            