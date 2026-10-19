/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution {
    private:
    TreeNode * solve(TreeNode * node, int val){
        if( node == nullptr){
            return new TreeNode(val);
        }
        if( val < node->data){
          node->left = solve(node->left, val);
        }
        else{
            node->right = solve(node->right, val);
    }
    return node;
    }
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        return solve(root, val);
    }
};