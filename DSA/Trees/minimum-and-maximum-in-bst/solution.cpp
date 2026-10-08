/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode* left;
 *     TreeNode* right;
 * };
 */

class Solution {
public:
    vector<int> findMinMax(TreeNode* root) {
       TreeNode * minNode = root;
       TreeNode * maxNode =root;

       while(minNode->left != nullptr){
        minNode = minNode->left;
       }

       while(maxNode->right != nullptr){
        maxNode = maxNode->right;
       }

       return {minNode->val, maxNode->val};
    }
};