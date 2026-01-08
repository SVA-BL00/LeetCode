class Solution:
    def buildArray(self, target: List[int], n: int) -> List[str]:
        s = []
        res = []
        j = 0
        for i in range(1, n+1):
            if s == target:
                return res
            if i == target[j]:
                res.append("Push")
                j += 1
                s.append(i)
            else:
                res.append("Push")
                res.append("Pop")
        return res
        