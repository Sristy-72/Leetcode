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
  int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        height(root, diameter);
        return diameter;
    }

    int height(TreeNode* node, int &diameter) {
        if (!node) return 0;
        
        int leftHeight = height(node->left, diameter);
        int rightHeight = height(node->right, diameter);

        // update diameter
        diameter = max(diameter, leftHeight + rightHeight);

        // return height of current node
        return 1 + max(leftHeight, rightHeight);
        
        
    }
};