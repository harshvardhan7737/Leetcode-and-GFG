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
    int getDecimalValue(ListNode* head) {
        
        string ans = {};
        string a;
        while(head!=NULL)
        {
            a = to_string(head->val);
            ans+=a;
            head=head->next;
        }
        
        int res = stoi(ans, 0, 2);
        return res;
        
    }
};