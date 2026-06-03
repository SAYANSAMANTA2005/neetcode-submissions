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
        ListNode* head1=l1;ListNode*head2=l2;
        ListNode* prev1=l1->next; ListNode* prev2=l2->next;
        int carry=0,islongerl1=0,islongerl2=0;
        while(l1 || l2){
          if(l1)
          carry+=l1->val;
          if(l2)
          carry+=l2->val;

          if(l1)
          l1->val=carry%10;
          if(l2)
          l2->val=carry%10;

          carry/=10;

          if(l1 && !l2)islongerl1=1;
          if(!l1 && l2)islongerl2=1;
          
          if(!prev1 && !prev2 && carry){
            if(islongerl1)l1->next=new ListNode(carry);
            else l2->next=new ListNode(carry);
            break;
          }

          if(l2)
          l2=l2->next;
          if(l1)
          l1=l1->next;
          if(prev1)
          prev1=prev1->next;
          if(prev2)
          prev2=prev2->next;

        }
        if(islongerl1)return head1;
        return head2;
        
    }
};
