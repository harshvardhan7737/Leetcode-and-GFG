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
    vector <int> ans; // inorder array
        
    void recursion(TreeNode* root){
            if(root==NULL)
                return;
            
            recursion(root->left);
            ans.push_back(root->val);
            recursion(root->right);           
    }
    
    bool isValidBST(TreeNode* root) { 
        recursion(root);
        for(int i=1; i<ans.size(); i++)
        {
            if(ans[i-1]>=ans[i])
                return false;
        }
        return true;
    }
};