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
 int bstToG(TreeNode *root,int v){
	if(!root){
		return v;
	}

	root->val += bstToG(root->right,v);
	int res = root->val;

	if(root->left){
		res = bstToG(root->left,root->val);
	}

	return res;
}
    
TreeNode* bstToGst(TreeNode* root) {
	bstToG(root,0);
	return root;
}
};
