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
    void helper(TreeNode* root, vector<vector<int>> &ans,vector<int> & path){
            
            if(root == nullptr){
                return;
            }
            path.push_back(root->data);
            if(root->left == nullptr && root->right == nullptr){
                ans.push_back(path);
                path.pop_back();
                return;
            }
            helper(root->left,ans, path);
            
            helper(root->right,ans, path);
            path.pop_back();
    }
	public:
		vector<vector<int>> allRootToLeaf(TreeNode* root) {
            vector<int> path;
            vector<vector<int>> ans;
            helper(root, ans, path);
            return ans;
		}
};