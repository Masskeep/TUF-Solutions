/* class TreeNode {
       int val;
       TreeNode *left, *right;
       TreeNode(int x) : val(x), left(NULL), right(NULL) {}
   };
*/

class Solution {
    private:
    TreeNode* prev = nullptr;

    void helperflat(TreeNode * root){
        if(!root){
            return ;
        }

        helperflat(root->right);
        helperflat(root->left);
        root->right = prev;
        root->left = nullptr;
        prev = root;
    }
public:
    void flatten(TreeNode* root) {
        helperflat(root);
    }
};
