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
    bool helper(TreeNode * A, TreeNode* B){
        if(A == nullptr && B == nullptr){
            return true;
        }
        if(A == nullptr || B == nullptr)
         return false;
        if(A->data != B->data){
            return false;
        }
        
        return helper(A->left, B->right)
       &&
       helper(A->right, B->left);
        
    }
public:
    bool isSymmetric(TreeNode* root) {
       return helper(root->left, root->right);
    }
};