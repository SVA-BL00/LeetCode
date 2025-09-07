class Solution(object):
    def sumZero(self, n):
        """
        :type n: int
        :rtype: List[int]
        """
        num = n // 2
        res = []
        for i in range(num):
            res.extend([-i-1, i+1])
        if n % 2 != 0: res.append(0)

        return res