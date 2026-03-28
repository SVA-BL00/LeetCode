from collections import deque
class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        m = len(grid)
        n = len(grid[0])
        count = 0
        for i in range(m):
            for j in range(n):
                if grid[i][j] == "1":
                    queue = deque([(i,j)])
                    grid[i][j] = "0"
                    while queue:
                        r,c = queue.popleft()
                        if r - 1 >= 0 and grid[r-1][c] == "1":
                            grid[r-1][c] = "0"
                            queue.append([r-1, c])
                        if r + 1 < m and grid[r+1][c] == "1":
                            grid[r+1][c] = "0"
                            queue.append([r+1, c])
                        if c -1 >= 0 and grid[r][c-1] == "1":
                            grid[r][c-1] = "0"
                            queue.append([r, c-1])
                        if c + 1 < n and grid[r][c+1] == "1":
                            grid[r][c+1] = "0"
                            queue.append([r, c+1])
                    count += 1
        return count