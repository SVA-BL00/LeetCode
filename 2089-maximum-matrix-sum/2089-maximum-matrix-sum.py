class Solution:
    def maxMatrixSum(self, matrix: List[List[int]]) -> int:
        negatives = 0
        totalSum = 0
        minVal = float("inf")

        for row in matrix:
            for val in row:
                totalSum += abs(val)
                if val < 0:
                    negatives += 1
                minVal = min(minVal, abs(val))
        if negatives % 2 != 0:
            totalSum -= 2* minVal
        return totalSum