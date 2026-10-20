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

    TreeNode * connector(TreeNode * root){
        if(!root->left){
            return root->right;
        }

        else if(!root->right){
            return root->left;
        }

        TreeNode* leftchild = root->left;
        TreeNode* leftright = root->right;

        while(leftright->left){
            leftright = leftright->left;
        }

        leftright->left = leftchild;
        return root->right;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
       if(root == NULL)
       return NULL;

       if(root->data == key){
        return connector(root);
       }

       TreeNode * node = root;

       while(node){
        if(node->data > key){
            if(node->left && node->left->data ==key) {
            node->left = connector(node->left);    
            break;   }
       
       else
        node = node->left;
       }
       else{
        if(node->right && node->right->data == key){
            node->right = connector(node->right);
            break;
        }
        else{
            node = node->right;
        }
       }
       }
       return root;
    }
};