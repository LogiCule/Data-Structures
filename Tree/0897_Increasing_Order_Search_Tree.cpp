class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        stack<TreeNode *> par;
        par.push(root);
        
        TreeNode* temp;
        while(!par.empty())
        {
            if(par.top()->left)
            {
                temp=par.top()->left;
                if(temp->val<root->val)
                {
                    root=temp;
                }
                par.top()->left=NULL;
                par.push(temp);
            }
            else
            {
                temp=par.top();
                par.pop();
                temp->left=NULL;
                if(temp->right)
                {
                    par.push(temp->right);
                }
                temp->right=par.top();
                cout<<temp->val;
            }
        }
        return root;
    }
};
