# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxLevelSum(self, root: Optional[TreeNode]) -> int:
        max_sum, ans, level = float('-inf'), 0, 0
        queue_nodes = collections.deque()
        queue_nodes.append(root)

        while queue_nodes:
            level += 1
            sum_level = 0
            for _ in range(len(queue_nodes)):
                node = queue_nodes.popleft()
                sum_level += node.val

                if node.left:
                    queue_nodes.append(node.left)
                if node.right:
                    queue_nodes.append(node.right)
                
            if sum_level > max_sum:
                max_sum = sum_level
                ans = level
        return ans