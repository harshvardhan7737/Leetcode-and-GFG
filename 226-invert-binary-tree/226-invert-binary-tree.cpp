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
    
    void recur(TreeNode* root)
    {
        if(root==NULL)
            return;
        
        if(!root->right && !root->left)
            return;
        
        recur(root->left);
        recur(root->right);
        
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        
        return;
    }
    
    
    TreeNode* invertTree(TreeNode* root) {
        
        recur(root);
        
        return root;
        
    }
};