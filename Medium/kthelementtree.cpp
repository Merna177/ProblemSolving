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
    int value=0,x=0;
  void inorder(TreeNode* root,int k){
    if(root==NULL)return ;
    inorder(root->left,k);
    value++;
    if(k==value){
        x=root->val;
     return ;
    }
    inorder(root->right,k);
    
}
  int kthSmallest(TreeNode* root, int k) {
     inorder(root,k);  
     return x; 
    }
};
