/*Iterative Solution*/
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        queue<TreeNode*> nodes;
        if(root==NULL)
            return false;
        nodes.push(root);
        while(!nodes.empty())
        {
            TreeNode* temp=nodes.front();
            nodes.pop();
            if(temp->left && temp->right)
            {   
                nodes.push(temp->left);
                nodes.push(temp->right);
                temp->right->val+=temp->val;
                temp->left->val+=temp->val;
            }
            else if(temp->left)
            {
                nodes.push(temp->left);
                temp->left->val+=temp->val;
            }
            else if(temp->right)
            {
                nodes.push(temp->right);
                temp->right->val+=temp->val;
            }
            else
            {
                if(temp->val==sum)
                    return true;
            }
            
        }
        return false;
    }
};
