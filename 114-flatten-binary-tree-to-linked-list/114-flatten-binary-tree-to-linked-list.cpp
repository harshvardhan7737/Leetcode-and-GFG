/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    void flatten(TreeNode* root) {
        
        TreeNode* main = root;
        
        while(main)
        {
            if(!main->left)
                main=main->right;
            
            else
            {
                TreeNode* prev = main->left;
                
                while(prev->right)
                {
                    prev = prev->right;
                }
            
                
                prev->right=main->right;
                main->right = main->left;
                main->left= NULL;
                
                main = main->right;
            }
        }
    }
};