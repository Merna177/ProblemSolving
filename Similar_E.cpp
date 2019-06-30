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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> first={};
        vector<int> second={};
        dfs(root1,first);
        dfs(root2,second);
        return first==second;
    }
    
    void dfs (TreeNode* root1,vector<int> &v){
        if(root1==NULL)return;
        if((root1->left ==NULL) && (root1->right ==NULL)){
            v.push_back(root1->val);
        }
        dfs(root1->left,v);
        dfs(root1->right,v);
    }
    
    
};
