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
// void inorder(TreeNode* root, vector<int>&arr){
//     int val;
//     if(root==nullptr) return;
//     inorder(root->left,arr);
//     arr.push_back(root->val);
//     inorder(root->right, arr);
// }
    vector<int> inorderTraversal(TreeNode* root) {
        // vector<int>arr;
        // inorder(root, arr);
        // return arr;

        // vector<int>v;
        // if(root==NULL) return v;
        // stack<TreeNode*>st;
        // st.push(root);
        // while(!st.empty()){
        //      root= st.top();
        //      st.pop();
        //      if(root->left!=NULL) st.push(root->left);
        //      v.push_back(root->val);
        //      if(root->right!=NULL) st.push(root->right);     
        // }
        // return v;

        stack<TreeNode*>st;
        vector<int>v;
        // TreeNode*node= root;
        while(true){
            if(root!=NULL){
                st.push(root);
                root= root->left;
            }
            else{
                if(st.empty()==true)break;
                  root= st.top();
                  st.pop();
                  v.push_back(root->val);
                  root= root->right;
                
            }
        }
        return v;
    }
};