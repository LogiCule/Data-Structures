//Iterative Solution
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int maxDepth=0;
        stack<TreeNode *> nodes;
        TreeNode* ptr;
        if(root)
        {
            root->val=1;
            nodes.push(root);
            while(!nodes.empty())
            {
                ptr=nodes.top();
                if(ptr->left && ptr->right)
                {
                    if(ptr->val==-1)
                    {
                        nodes.pop();
                        nodes.push(ptr->right);
                    }
                    else
                    {
                        ptr->left->val=ptr->val+1;
                        ptr->right->val=ptr->val+1;
                        ptr->val=-1;
                        nodes.push(ptr->left);
                    }
                }
                else if(ptr->left)
                {
                    if(ptr->val==-1)
                    {
                        nodes.pop();
                    }
                    else
                    {
                        ptr->left->val=ptr->val+1;
                        nodes.push(ptr->left);
                        ptr->val=-1;
                    }
                }
                else if(ptr->right)
                {
                    if(ptr->val==-1)
                    {
                        nodes.pop();
                    }
                    else
                    {
                        ptr->right->val=ptr->val+1;
                        nodes.push(ptr->right);
                        ptr->val=-1;
                    }
                }
                else
                {
                    if(ptr->val>maxDepth)
                    {
                        maxDepth=ptr->val;
                    }
                    nodes.pop();
                }
            }
        }
        return maxDepth;
    }
};
//Recursive
class Solution {
public:
    int max;
    void checkHeight(TreeNode* root,int level)
    {
        if(!root)
            return ;
        if(level>max)
            max=level;
        checkHeight(root->left,level+1);
        checkHeight(root->right,level+1);
    }
    int maxDepth(TreeNode* root) {
        max=0;
        checkHeight(root,1);
        return max;
    }
};
/*
problem:https://leetcode.com/problems/maximum-depth-of-binary-tree/
*/
