/* class TreeNode {
       int val;
       TreeNode *left, *right;
       TreeNode(int x) : val(x), left(NULL), right(NULL) {}
   };
*/

class Solution {
public:
    bool checkChildrenSum(TreeNode* root) {
      if(root == nullptr){
        return true;
      }
   if(!root->left && !root->right ){
    return true;
   }
   int leftval = root->left ? root->left->val : 0;
   int rightval = root->right? root->right->val:0;

   return (root->val == leftval + rightval) && checkChildrenSum(root->left) && checkChildrenSum(root->right);


      
    }
};
