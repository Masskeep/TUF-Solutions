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
     void inorderTraversal(TreeNode * node, vector<int> & val){
        if(node){
        inorderTraversal(node->left, val);
        val.push_back(node->data);
        inorderTraversal(node->right, val);
        }
     }
public:

	vector<int> kLargesSmall(TreeNode* root,int k){
		vector <int> val;

        inorderTraversal(root, val);

        int ksmall = val[k-1];
        int klarge = val[val.size() - k];

        return {ksmall, klarge};
	}
};