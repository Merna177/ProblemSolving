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
    ListNode* reverseList(ListNode* head) {
        if (!head || ! head->next)
          return head;
        ListNode* start=nullptr;
        ListNode* prev=nullptr;
        while(head !=NULL){
            start=head;
            head=head->next;
            start->next=prev;
            prev=start;
        }
     return start;
    }
};
