/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include<queue>
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
      queue<pair<TreeNode*,int>> q;
      int mx=0;
      int value=-1;
      q.push(make_pair(root,1));
      while(!q.empty()){
          TreeNode* a= q.front().first;
          int level = q.front().second;
          q.pop();
          if(a->left ==NULL && a->right ==NULL){
              if(level>mx){
                  value = a->val;
                  mx=level;
              }
          }
          if(a->left !=NULL)q.push(make_pair(a->left,level+1));
          if(a->right !=NULL)q.push(make_pair(a->right,level+1));
      }
        return value;
    }
};
