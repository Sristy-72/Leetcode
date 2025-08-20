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
// void preorder(TreeNode* root,vector<int>&arr){
//      int val;
//     if(root==nullptr) return ;
//     arr.push_back(root->val);
//     preorder(root->left,arr);
//     preorder(root->right,arr);
// }
    vector<int> preorderTraversal(TreeNode* root) {
        // vector<int>arr;
        //  preorder(root, arr);
        //  return arr;
      //ITERATIVE APPROACH
        vector<int>v;
       
        if(root==NULL) return v;
         stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            root=st.top();
            st.pop();
            v.push_back(root->val);
             if(root->right!=nullptr) st.push(root->right);
            if(root->left!=nullptr) st.push(root->left);
           
            
        }
        return v;

    }
};