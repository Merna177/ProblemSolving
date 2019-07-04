//BFS Solution
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
       queue<pair<TreeNode*,int>> q;
       vector<int> output;
       if(root !=NULL)
         q.push(make_pair(root,0));
       while(!q.empty()){
           TreeNode* top = q.front().first;
           int level =q.front().second;
           q.pop();
           if(output.size()<level+1){
             output.push_back(top->val);
           }
           else {
              output[level]=max(output[level],top->val);
           }
           if(top->left !=NULL)
             q.push({top->left,level+1});
           if(top->right !=NULL)
             q.push({top->right,level+1});

}
        return output;
    }
};
