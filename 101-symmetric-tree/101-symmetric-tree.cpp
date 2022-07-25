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
    bool solve(TreeNode* root1, TreeNode* root2)
    {
        
        if(!root1 || !root2)
        {
            if(root1==root2)
                return true;
            return false;
        }
        
        if(root1->val != root2->val)
            return false;
        
        bool x = solve(root1->left,root2->right) && solve(root1->right,root2->left);
        return x;
        
    }
    
    bool isSymmetric(TreeNode* root) {
        
        bool x = solve(root->left,root->right);

        return x;
    }
};