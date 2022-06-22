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
   
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) { 
       if(l1==NULL)
           return l2;
       if(l2==NULL)
           return l1; 
        
       int carry=0,sum=0;
       ListNode *l3 = NULL;
        ListNode *temp = NULL;
       while(l1!=NULL || l2!=NULL)
       {
         
          sum=0;
           if(l1 && !l2){
               sum = l1->val + carry;
               carry=0;
               }
            else if(!l1 && l2){
               sum = l2->val + carry;
                carry=0;
            }
           else{
              sum=l1->val+l2->val+carry;
               carry =0;
           }

         if(sum>9)
         {
             carry=1;
             sum=sum%10;
         }

        ListNode *ptr=new ListNode(sum);    
         if(l3==NULL)
         {
          l3 = ptr;
             temp = ptr;
         }
           
         else 
         {
            temp->next=ptr;
            temp=temp->next;
         }

           
        int carry=0;
           
            if(l1)
           l1=l1->next;
           if(l2)
           l2=l2->next;
         
       }
        
           if(!l1 && !l2 && carry==1)
           {
               ListNode* ptr = new ListNode(1);
               temp->next = ptr;     
           }
   
    return l3;
  }
    
};