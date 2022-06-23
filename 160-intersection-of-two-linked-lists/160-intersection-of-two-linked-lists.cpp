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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *tempA = headA;
        ListNode* tempB = headB;
        
        int count1=0, count2=0;
        while(tempA)
        {
            count1++;
            tempA=tempA->next;
        }
        
        while(tempB)
        {
            count2++;
            tempB=tempB->next;
        }
        
        int test = abs(count1-count2);
        
        if(count1>count2)
        {
         while(test--)
         {
             headA=headA->next;
         }       
        }
        else
        {
         while(test)
         {
             headB=headB->next;
             test--;
         }
        }

        
        while(headA || headB)
        {
            if(headA == headB)
            {
                return headA;
            }
            else
            {
                headA=headA->next;
                headB=headB->next;
            }
        }
        return NULL;
    }
};