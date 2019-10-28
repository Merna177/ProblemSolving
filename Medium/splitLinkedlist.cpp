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
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        
        vector<ListNode*> ans(k,nullptr);
        ListNode* node = root;
        int listsize = 0;
        vector<int> sizes(k,0);
        
        while(node)
        {
            listsize++;
            node = node->next;
        }
        
        int equalSize = listsize/k;
        for(int i=0; i<k; i++)
            sizes[i] = equalSize;
        
        listsize = listsize%k;
        for(int i=0; i<k ; i++)
        {
            if(listsize<=0)break;
            sizes[i]++;
            listsize--;
        }
        
        node = root;
        int group = 0;
        
        while(group < k && node)
        {
            ListNode* start = node;
            for(int i=0; (i<sizes[group]-1); i++)
                node = node->next;
            
            ListNode* ed = node;
            if(node) node = node->next;
            ed->next = nullptr;
            ans[group] = start;
            group++;
        }
        return ans;
    }
};
