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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<pair<TreeNode*,int> > q;
        vector<vector<int> > ans;
        vector<int> path;
        if(root==NULL){
           return ans; 
        }
        q.push(make_pair(root,0));
        int prev=0;
        while(!q.empty()){
            TreeNode* tp= q.front().first;
            int level=q.front().second;
            q.pop();
          if(tp->left !=NULL)q.push(make_pair(tp->left,level+1));
           if(tp->right !=NULL)q.push(make_pair(tp->right,level+1));
            if(level==prev){
                path.push_back(tp->val);
                
            }else{
                prev=level;
                ans.push_back(path);
                path.clear();
                path.push_back(tp->val);
            }
           

            
        }
        ans.push_back(path);
        return ans;
    }
};
