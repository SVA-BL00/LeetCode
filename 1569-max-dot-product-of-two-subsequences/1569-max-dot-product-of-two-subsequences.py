class Solution:
    def maxDotProduct(self, nums1: List[int], nums2: List[int]) -> int:
        sol = {}
        def dp(i,j):
            if i == len(nums1) or j == len(nums2):
                return float("-inf")
            if(i,j) in sol:
                return sol[(i,j)]
            prod = nums1[i] * nums2[j]
            res = max(prod + dp(i+1, j+1), prod, dp(i+1,j), dp(i,j+1))
            sol[(i,j)] = res

            return sol[(i,j)]
        return dp(0,0)
            