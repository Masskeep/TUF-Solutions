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
    bool isleaf(TreeNode * root){
        return !root->left && !root->right;
    }
    void addLeftBoundary(TreeNode *root , vector <int> & res){
     TreeNode* curr = root->left;
     while(curr){
        if(!isleaf(curr)){
            res.push_back(curr->data);
        }
        if(curr->left){
          curr =  curr->left;
        }
        else
        curr = curr->right;
     }
    }
     void addRightBoundary(TreeNode * root, vector<int> & res){
        TreeNode* curr = root->right;
        vector<int> temp;
        while(curr){
          if(!isleaf(curr)){
            temp.push_back(curr->data);
          }
          if(curr->right){
            curr = curr->right;
          }
          else
          curr= curr->left;
        }
        for(int i = temp.size()-1; i>=0; i--){
           res.push_back(temp[i]);
        }
     }
    

    
     void addLeave(TreeNode * root, vector <int> & res){
        if(isleaf(root)){
            res.push_back(root->data);
            return;
        }
        if(root->left){
            addLeave(root->left, res);
        }
        if(root->right){
            addLeave(root->right, res);
        }
     }
public:
    vector <int> boundary(TreeNode* root){
    	vector <int> res;
        if(!root){
            return res;
        }
        if(!isleaf(root)){
           res.push_back(root->data);
        
        }
        addLeftBoundary(root, res);
        addLeave(root, res);
        addRightBoundary(root, res);
        return res;
        
        
       
    }
};