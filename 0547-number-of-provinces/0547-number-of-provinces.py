from collections import deque
class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        visited = set()
        n = len(isConnected)
        count = 0
        for i in range(n):
            if i not in visited:
                visited.add(i)
                queue = deque([i])
                while queue:
                    province = queue.popleft()
                    for k in range(n):
                        if isConnected[province][k] == 1 and k not in visited:
                            visited.add(k)
                            queue.append(k)
                count += 1
        return count