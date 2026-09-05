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
    vector<int> rightSideView(TreeNode* root) {
       vector<int> res;
        
        
       recursionRightside(root ,0, res);

       return res;
    }

    private:
    void recursionRightside(TreeNode * &root, int level,vector<int> &res){
        if(root == nullptr){
            return;
        }
      if(level == res.size()){
        res.push_back(root->data);
      }

      recursionRightside(root->right, level+1, res );
      recursionRightside(root->left, level+1, res);

    }
};