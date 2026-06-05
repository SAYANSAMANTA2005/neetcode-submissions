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
    ListNode* reverseList(ListNode* head) {
     ListNode* prev=nullptr,*curr=head;
     while(curr){
        ListNode *front=curr->next;
        curr->next=prev;//reversing the linkage
        prev=curr;
        curr=front;
     }
     return prev;

    }
};
/*
 0->1->2->3->4->5
 p<-c  f

 1st it
    p<-n  h
2nd it
       p<-n  h

3rd it
          p<-n  h
             p<-n
*/
