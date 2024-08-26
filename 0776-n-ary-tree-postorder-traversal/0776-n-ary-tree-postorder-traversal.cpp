/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
     vector<int> ans;
    void _postorder(Node* node){
        if(node==NULL) return;
        
        for(Node* child : node->children){
            _postorder(child);
        }
        
        ans.push_back(node->val);
    }
    vector<int> postorder(Node* root) {
        _postorder(root);
        return ans;
    }
};