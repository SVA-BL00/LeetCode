/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        queue<pair<TreeNode*, int>>visited;
        visited.push(pair(root, targetSum));

        while(!visited.empty()){
            auto curr = visited.front();
            TreeNode* node = curr.first;
            int remaining = curr.second;
            visited.pop();

            if(node){
                remaining -= node->val;
                if(remaining == 0 && !node->left && !node->right) return true;

                if(node->left) visited.push(pair(node->left, remaining));
                if(node->right) visited.push(pair(node->right, remaining));
            }
        }

        return false;
    }
};