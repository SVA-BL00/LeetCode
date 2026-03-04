class Solution:
    def numSpecial(self, mat: List[List[int]]) -> int:
        rows = len(mat)
        cols = len(mat[0])
        count = 0

        for i in range(rows):
            if sum(mat[i]) == 1:
                j = mat[i].index(1)
                if sum(mat[r][j] for r in range(rows)) == 1:
                    count += 1

        return count