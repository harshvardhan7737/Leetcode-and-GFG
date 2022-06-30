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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(k==0)
            return head;
        
        if(head==NULL || head->next == NULL)
            return head;
        
        
        ListNode* temp = head;
        // ListNode* p = head;
        ListNode* prev = head;
        int n = 0;
            
        while(temp)
        {
            temp = temp->next;
            n++;
        }
        
        if(k%n==0)
            return head;
        
        temp = head;
        int count = n - (k%n);
        
        int s = 0;
        while(s!=count)
        {
            prev = temp;
            temp=temp->next;
            s++;  
        }
        
        ListNode* ptr = temp;
        prev->next = NULL;
        
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        
        temp->next = head;  
        
            return ptr;
    }
};