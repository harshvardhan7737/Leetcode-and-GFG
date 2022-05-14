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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL)
        {
            return NULL;
        }
        
        if(head->next == NULL)
        {
            return NULL;
        }
        
        int count = 0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            count++;
            temp = temp->next;
        }
        
        int mid = count/2;
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        int counter = 0;
        while(counter != mid)
        {
            prev = curr;
            curr = curr->next;
            counter++;
        }
        
        prev->next = curr->next;
        delete curr;
        
        return head;
    }
};