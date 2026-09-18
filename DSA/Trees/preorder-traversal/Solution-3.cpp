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
    private:
    void helper(TreeNode* root, vector <int> & ans){
      if(root == nullptr){
        return;

      }
      ans.push_back(root->data);
      helper(root->left, ans);
      helper(root->right, ans);
    }
	public:
		vector<int> preorder(TreeNode* root){
	     vector <int> ans;
         helper(root, ans);
         return ans;
		}
};