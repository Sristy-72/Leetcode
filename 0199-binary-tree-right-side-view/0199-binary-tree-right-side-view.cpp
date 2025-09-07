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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
       if(root==NULL) return v; 
       queue<TreeNode*>q;
       q.push(root);
       while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;i++){
            TreeNode*root=q.front();
            q.pop();
            if(root->left!=nullptr) q.push(root->left);
            if(root->right!=nullptr) q.push(root->right);
            if(i==n-1) {
                v.push_back(root->val);
            }
        }
       }
       return v;
    }
};