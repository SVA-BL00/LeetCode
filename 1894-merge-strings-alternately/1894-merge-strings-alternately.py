class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        i = 0
        j = 0
        n = len(word1)
        m = len(word2)
        res = []
        while i < n and j < m:
            res.append(word1[i])
            res.append(word2[j])
            i +=1
            j +=1
        res.append(word1[i:n])
        res.append(word2[j:m])
        return "".join(res)