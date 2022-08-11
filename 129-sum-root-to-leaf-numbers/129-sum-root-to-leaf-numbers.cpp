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
    
    void solve(int ans, TreeNode* root,vector<int> &v) {
        
        if(!root)
        {
                return;
        }
        
        ans = ans*10 + root->val;
        
        if(root->left == NULL && root->right == NULL)
        {
            v.push_back(ans);
        }
        
        solve(ans,root->left,v);  
        solve(ans,root->right,v); 
        
    }    
    
    int sumNumbers(TreeNode* root) {
        
        if(root==NULL)
        {
            return NULL;
        }
        
        vector<int> v;
        int ans = 0;
        
        solve(ans, root, v);
        int res=0;
        for(int i=0; i<v.size(); i++)
        {
            res+=v[i];
        }
        return res;
    }
};