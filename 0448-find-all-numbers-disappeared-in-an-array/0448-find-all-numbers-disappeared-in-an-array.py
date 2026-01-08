class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        nums_list = list(range(1, len(nums)+1))
        num_set = set()
        num_set.update(nums_list)
        for i in range(len(nums)):
            if nums[i] in num_set:
                num_set.remove(nums[i])
        
        return list(num_set)
        
        