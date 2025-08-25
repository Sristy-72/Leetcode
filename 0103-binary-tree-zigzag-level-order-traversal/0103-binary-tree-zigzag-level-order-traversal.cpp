/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if (root == NULL) {
            return v;
        }
        queue<TreeNode*> q;
        q.push(root);
        bool lefttoright = true;
        while (!q.empty()) {
            vector<int> v1;
            int n = q.size();
            while (n--) {
                 TreeNode* front = q.front();
                    q.pop();   
                
                    if (front->left != NULL)
                        q.push(front->left);
                         if (front->right != NULL)
                        q.push(front->right); 
                         v1.push_back(front->val);
            }
                if(!lefttoright){
                    reverse(v1.begin(), v1.end());
                }
                // if (!lefttoright) {  
                //     if (front->left != NULL)
                //         q.push(front->left);  
                //          if (front->right != NULL)
                //         q.push(front->right); 
                //          v1.push_back(front->val);
                // }
                // reverse(v1.begin(), v1.end());
                 
            
            v.push_back(v1);
            lefttoright=!lefttoright;
        }
        return v;
    }
};