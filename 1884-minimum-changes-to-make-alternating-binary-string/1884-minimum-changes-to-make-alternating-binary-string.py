class Solution:
    def minOperations(self, s: str) -> int:
        need = '0'
        min_change = float('inf')
        for j in range(2):
            change = 0
            for i in range(len(s)):
                if s[i] != need:
                    change += 1
                if need == '0':
                    need = '1'
                else:
                    need = '0'
            need = '1'
            min_change = min(change, min_change)
        return min_change