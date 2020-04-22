//Iterative
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        queue <TreeNode*>left;
        queue <TreeNode*>right;
        TreeNode* temp1;
        TreeNode* temp2;
        if(!root)
        {
            return true;
        }
        left.push(root->left);
        right.push(root->right);
        while(!left.empty() || !right.empty())
        {
            if(left.empty() || right.empty())
            {
                return false;
            }
            temp1=left.front();
            temp2=right.front();
            left.pop();
            right.pop();
            if(temp1==NULL && temp2==NULL)
            {
                continue;
            }
            else if(temp1==NULL || temp2==NULL )
            {
                return false;
            }
            else if(temp1->val!=temp2->val)
            {
                return false;
            }
            else
            {
                left.push(temp1->left);
                left.push(temp1->right);
                right.push(temp2->right);
                right.push(temp2->left);
            }
        }
        return true;
    }
};
//Recursion
class Solution {
public:
    bool check(TreeNode* root1,TreeNode* root2)
    {
        
        if(!root1 && !root2)
            return true;
        //cout<<root1->val<<" "<<root2->val<<endl;
        if(root1 && root2 && root1->val==root2->val)
        {
            
            return check(root1->left, root2->right) && check(root1->right,root2->left);
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;
        return check(root->left,root->right);
    }
};
