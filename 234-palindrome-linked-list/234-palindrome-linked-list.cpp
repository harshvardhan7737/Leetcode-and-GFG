/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    bool solve(vector<int>&ans)
    {
        int l=0;
        int r = ans.size()-1;
        
        while(l<=r)
        {
            if(ans[l]!=ans[r])
                return false;
            
            l++;
            r--;
            
        }
        return true;
    }
    
    bool isPalindrome(ListNode* head) {
        
        vector<int> ans;
        while(head)
        {
            ans.push_back(head->val);
            head=head->next;
        }
        
        bool res = solve(ans);
        return res;
    }
};