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
int maxsum(TreeNode*root, int&sum){
      if(root==NULL) return 0;
      int lhs=max(0, maxsum(root->left, sum));
      int rhs= max(0,maxsum(root->right, sum));
      sum= max(sum,root->val+ lhs+rhs);
      return root->val+ max(lhs,rhs);

}
    int maxPathSum(TreeNode* root) {
        int sum=INT_MIN;
        maxsum(root, sum);
        return sum;
    }
};
  
   