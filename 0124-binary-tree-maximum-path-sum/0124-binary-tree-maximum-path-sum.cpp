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
    int maxPathSum(TreeNode* root) {
        int ans= INT_MIN;
         maxPath(root,ans);
         return ans;
    }
    private:
    int maxPath(TreeNode*root, int&ans){
        if(root==nullptr)
        return 0;
        const int l= max(0, maxPath(root->left,ans));
        const int r= max(0, maxPath(root->right,ans));
        ans=max(ans,root->val+l+r);
        return root->val+max(l,r);
    }
};