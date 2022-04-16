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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* temp = head;
        ListNode* prevNode = head;
        
        if(head==NULL)
            return head;
        
        while(temp!=NULL)
        {
            
            if(head->val == val)
            {
                head = head->next;
            }
            else
            {
                if(temp->val == val  && temp->next == NULL)
                {
                    prevNode->next = NULL;
                    // delete temp;
                }   
                else if(temp->val == val)
                {
                    prevNode->next = temp->next;
                    // delete temp;
                }   
                else
                prevNode = temp;
            }
            temp = temp->next;
        }
        
        return head;
    }
};