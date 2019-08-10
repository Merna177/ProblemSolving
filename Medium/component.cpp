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
    int numComponents(ListNode* head, vector<int>& G) {
      map<int,int> mp;
      for(int i=0;i<G.size();i++){
          mp[G[i]]++;
      }
      int cnt=0;
      if(head==NULL)return cnt;
      int flag=0;
      while(head){
            if(mp[head->val]==1) {
                if(flag==0) cnt++;
                flag=1;        
            }else{
                flag=0;
            }
            head=head->next;
        }
        return cnt;
    }
};
