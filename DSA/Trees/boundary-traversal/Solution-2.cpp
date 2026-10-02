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
     bool isLeaf(TreeNode* root){
        return root->left == nullptr && root->right == nullptr;
    }
    void leftboundary(TreeNode* root, vector<int> & res){
       TreeNode* curr = root->left;

       while(curr){
        if(!isLeaf(curr)){
            res.push_back(curr->data);
        }
        if(curr->left) curr = curr->left;
        else curr = curr->right;
       }

    }
    void leafNode(TreeNode * root, vector <int> & res){
        if(isLeaf(root)){
            res.push_back(root->data);
            return;
        }
        if(root->left ){
            leafNode(root->left, res);
        }
        if(root->right){
            leafNode(root->right,res);
        }
    
    }
    void addRightBoundary(TreeNode* root, vector<int> & res){
        TreeNode * curr = root->right;
        vector <int> temp;
        while(curr){
            if(!isLeaf(curr)){
                temp.push_back(curr->data);
            }
            if(curr->right){
              curr= curr->right;
            }
            else
            curr = curr->left;
        }
        for(int i = temp.size()-1; i>=0; i--){
            res.push_back(temp[i]) ;
        }
    }
public:
    vector <int> boundary(TreeNode* root){
        vector <int> result;
        if(root == nullptr){
            return result;
        }

        if(!isLeaf(root))
         result.push_back(root->data);

        leftboundary(root, result);
        leafNode(root, result);
        addRightBoundary(root, result);

        return result;
    }
};