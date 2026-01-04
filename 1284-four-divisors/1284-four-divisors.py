class Solution:
    def sumFourDivisors(self, nums: List[int]) -> int:
        acc = 0
        for i in range(len(nums)):
            temp_arr = []
            for j in range(1, int(math.sqrt(nums[i]))+1):
                if nums[i] % j == 0:
                    temp_arr.append(j)
                    if j != nums[i] // j:
                        temp_arr.append(nums[i] // j)
            if len(temp_arr) == 4:
                acc += sum(temp_arr)
        return acc