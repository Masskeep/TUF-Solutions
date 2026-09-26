/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution{
public:
    bool isBalanced(TreeNode *root){
    	return dfsheight(root) != -1;
    }
    private:
    int dfsheight(TreeNode * root){
        if( root == nullptr){
            return 0;
        }

        int leftheight = dfsheight(root->left);

        if(leftheight == -1)
        return -1;

        int rightheight = dfsheight(root->right);

        if(rightheight == -1)
        return -1;

        if(std::abs(leftheight-rightheight) > 1) return -1;

        return std::max(leftheight, rightheight) +1;



    }
};