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
    vector<vector<int> > zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        queue <TreeNode*> store;

        store.push(root);

        bool lefttoRight = true;

       

        while(!store.empty()){
            int size = store.size();

            vector <int> row(size);

            for(int i =0; i< size; i++){
                TreeNode* node = store.front();
                store.pop();

                int index = lefttoRight ? i : (size-1-i);

                row[index] = node->data;

                if(node->left){
                    store.push(node->left);

                }
                if(node->right){
                    store.push(node->right);
                }

               

               
            }
             lefttoRight = !lefttoRight;
              ans.push_back(row);


        }
        return ans;
    }
};