/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        ListNode* temp = head;
        unordered_map<ListNode*,int> m;
        if(head==NULL)
        return false;
        
        while(temp)
        {
            
            if(m.count(temp)>0)
            {
                return true;
            }
            
            else
            {
                m[temp] = 1;
                temp=temp->next;
            }
        }
        return false;
    }
};