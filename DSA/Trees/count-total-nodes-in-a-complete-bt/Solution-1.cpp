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
    int countNodes(TreeNode* root) { 
       if(root == nullptr){
        return 0;
       }
       int left= leftheight(root);
       int right = rightheight(root);

       if( left == right) return (1 << left)-1;

       return 1+ countNodes(root->left) + countNodes(root->right);
    }

    int leftheight(TreeNode * node){
        int cnt=0;
        while(node){
     cnt++;
     node = node->left;
        }
        return cnt;
    }
    int rightheight(TreeNode * node){
        int cnt= 0;
        while(node){
            cnt++;
            node= node->right;
        }
        return cnt;
    }
};