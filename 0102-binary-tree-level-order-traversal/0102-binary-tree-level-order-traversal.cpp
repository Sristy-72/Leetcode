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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v;
       if(root==NULL) return v; 
       queue<TreeNode*>q;
       q.push(root);
       while(!q.empty()){
        vector<int>v1;
        int n=q.size();
        while(n>0){
            TreeNode*root=q.front();
            q.pop();
            if(root->left!=nullptr) q.push(root->left);
            if(root->right!=nullptr) q.push(root->right);
            v1.push_back(root->val);
            n--;
        }
        v.push_back(v1);
       }
       return v;
    }
};