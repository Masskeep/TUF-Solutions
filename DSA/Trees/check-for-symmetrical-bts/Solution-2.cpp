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
    bool helper(TreeNode* left, TreeNode* right){
        if(left == nullptr && right == nullptr){
            return true;
        }
        if(left == nullptr || right == nullptr){
            return false; 
        }
        if(left->data !=right->data){
            return false;
        }
        return helper(left->left, right->right) && 
         helper(left-> right , right -> left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        return helper(root->left, root->right);
    }
};