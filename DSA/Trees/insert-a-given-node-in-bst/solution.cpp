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
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == nullptr){
            return new TreeNode(val);
        }
      TreeNode * curr = root;
      while(true){
       if(curr->data <= val ){
        if(curr->right != nullptr) curr = curr->right;
       else{
           curr->right = new TreeNode(val);
           break;
        }
       }
       else{
        if(curr->left != nullptr) 
        {
            curr = curr->left;
        }
        else{
            curr->left = new TreeNode(val);
            break;
        }
              }
       
             }
             return root;
    }
};