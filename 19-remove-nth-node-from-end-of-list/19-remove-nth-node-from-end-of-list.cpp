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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* temp = head;
        int count = 0;
        
        if(temp->next == NULL)
        {
            head = NULL;
            return head;
        }
        
        while(temp!=NULL)
        {
            count++;
            temp = temp->next;
        }
        
        if(n==count)
        {
            head = head->next;
            return head;
        }      
        
        temp = head;
        ListNode* prevNode = head;
        int i=0;
        while(i != count-n)
        {       
            prevNode = temp;
            temp = temp->next;
            i++;
        }
        prevNode->next =  temp->next;
        delete temp;
        
        return head;
    }
};