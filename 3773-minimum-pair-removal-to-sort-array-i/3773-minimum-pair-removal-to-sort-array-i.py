class Solution:
    def minimumPairRemoval(self, nums: List[int]) -> int:
        temp = sorted(nums)
        if nums == temp:
            is_increasing = True
        else:
            is_increasing = False
        count = 0

        while not is_increasing:
            sums = {}
            for i in range(len(nums) -1):
                sum_temp = nums[i] + nums[i+1]
                if sum_temp in sums:
                    continue
                else:
                    sums[sum_temp] = i
            small = min(sums)
            nums[sums[small]] = small
            del nums[sums[small] +1]

            temp = sorted(nums)
            count += 1
            if nums == temp:
                is_increasing = True

        return count