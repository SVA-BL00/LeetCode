# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def subtreeWithAllDeepest(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        depth = {None: -1}
        def dfs(node, parent = None):
            if node:
                depth[node] = depth[parent] +1
                dfs(node.left, node)
                dfs(node.right, node)
        dfs(root)

        max_depth = max(depth.values())

        def answer(node):
            if not node or depth.get(node, None) == max_depth:
                return node
            if answer(node.left) and answer(node.right):
                return node
            else:
                if answer(node.left):
                    return answer(node.left)
                else:
                    return answer(node.right)
        
        return answer(root)