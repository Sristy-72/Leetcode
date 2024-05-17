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
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
                stack<TreeNode*> stk;
        bool changed = false;
        //bool: whether the child is left
        map<TreeNode*, pair<bool, TreeNode*>> parent;
        TreeNode* cur;
        
        do{
            parent.clear();
            changed = false;
            
            stk.push(root);
            parent[root] = make_pair(false, nullptr);

            while(!stk.empty()){
                cur = stk.top(); stk.pop();

                //post-order
                if(cur->right){
                    stk.push(cur->right);
                    parent[cur->right] = make_pair(false, cur);
                }
                if(cur->left){
                    stk.push(cur->left);
                    parent[cur->left] = make_pair(true, cur);
                }

                if(!cur->left && !cur->right && cur->val == target){
                    if(parent[cur].second == nullptr){
                        //cur node is root
                        return nullptr;
                    }
                    //cur node is not root
                    if(parent[cur].first){
                        parent[cur].second->left = nullptr;
                    }else{
                        parent[cur].second->right = nullptr;
                    }
                    changed = true;
                }

            }
            
        }while(changed);
        
        return root;

    }
};