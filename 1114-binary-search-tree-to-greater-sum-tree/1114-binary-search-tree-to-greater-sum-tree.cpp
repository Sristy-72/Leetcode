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

    void solve(TreeNode* root, int &sum) {
        if(!root) { //root == NULL
            return;
        }

        
        solve(root->right, sum); //RIGHT is covered
        
        sum += root->val;

        root->val = sum;

        solve(root->left, sum); //Covergin the left
    }

    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;

        solve(root, sum);

        return root;
    }
};
