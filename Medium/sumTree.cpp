#include <stack>
class Solution {
public:
        stack<TreeNode*> nodes;
        int sum = 0;
        TreeNode* bstToGst(TreeNode* root)
		{
			inOrder(root);
            while(!nodes.empty())
            {
                    if(nodes.top() != NULL)
                    {
                        sum += nodes.top()->val;
                        nodes.top()->val = sum;
                    }
                    nodes.pop();
            }
            return root;
		}
        TreeNode* inOrder(TreeNode* root)
        {
                if(root == NULL)
                {
                        return NULL;
                }
                if(root->left != NULL)
                {
                        nodes.push(inOrder(root->left));
                }
                nodes.push(root);
                if(root->right != NULL)
                {
                        nodes.push(inOrder(root->right));
                }
                return NULL;
        }
};
