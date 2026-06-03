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
        int total=0;
        ListNode* temp=head;ListNode*root=head;
        while(head){
            head=head->next;
            total++;
        }
        if (total == n)
    return temp->next;
        int current=0;
        while(root){
          
          current++;
          if(current==total-n){root->next= root->next->next;break;}
          
          

          root=root->next;
        }
        return temp;

    }
};
