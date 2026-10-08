/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution{	
	public:
		vector<int> floorCeilOfBST(TreeNode* root,int key){
			int floor = -1;
            int ceil =-1; 
            TreeNode* newnode = root;

        while(root ){

            if(root->data == key){
                floor  = root->data;
                break;
            }
          if(key > root->data){
            floor = root->data;
            root = root->right;
          }
          else
          root = root->left;
        
        }

        while(newnode){
            if(newnode->data == key){
                ceil = newnode->data;
                break;
            }
            if(newnode->data > key){
                ceil = newnode->data;
                newnode = newnode->left;
            }
            else
            newnode = newnode->right;
        }

        return {floor, ceil};
        
		}
};