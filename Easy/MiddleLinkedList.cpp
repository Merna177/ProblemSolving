/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// solve-->https://leetcode.com/problems/middle-of-the-linked-list/ 
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* start= head;
        int cnt=0;
        while(start != NULL){
            cnt++;
            start = start->next;
        }
        int middle = cnt/2 + 1;
       
        cnt=0;
       ListNode *middleN = head;
        while(middleN !=NULL){
            cnt ++;
            if(cnt ==middle)
                break;
            else
                middleN = middleN->next;
        }
        return middleN;
    }
};
