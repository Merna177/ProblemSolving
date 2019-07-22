/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
///1 2 3 4 5 6 7 8 
///odd-->1-->3-->5-->7 , even-->2-->4-->6-->8
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
      if(!head || !head->next)
            return head;
        
        ListNode *odd = head, *even = head->next, *eHead = even;
        while(even && even->next){
            odd->next = odd->next->next;
            even->next = even->next->next;
            odd = odd->next;
            even = even->next;
        }
        odd->next = eHead;
        return head;
    }
    
};
