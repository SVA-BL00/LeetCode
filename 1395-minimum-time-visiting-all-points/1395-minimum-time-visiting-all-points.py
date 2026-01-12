class Solution:
    def minTimeToVisitAllPoints(self, points: List[List[int]]) -> int:
        ans  = 0
        for i in range(len(points) -1):
            curr_x = points[i][0]
            curr_y = points[i][1]

            tar_x = points[i+1][0]
            tar_y = points[i+1][1]

            ans += max(abs(tar_x - curr_x), abs(tar_y-curr_y))
        
        return ans