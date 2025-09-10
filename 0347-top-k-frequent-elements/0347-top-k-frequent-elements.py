import heapq
class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """

        num_freq = {}
        for num in nums:
            if num not in num_freq:
                num_freq[num] = 0
            num_freq[num] += 1

        num_list = [(-freq, num) for num, freq in num_freq.items()]
        heapq.heapify(num_list)

        res = []

        for i in range(k):
            freq, num = heapq.heappop(num_list)
            res.append(num)
        
        return res

        

        