class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
    
        if(t1==NULL && t2==NULL)
            return NULL;
        else if(t1==NULL)
            return t2;
        else if(t2==NULL)
            return t1;
        t1->val+=t2->val;
        t1->left=mergeTrees(t1->left,t2->left);
        t1->right=mergeTrees(t1->right,t2->right);
        return t1;
    }
};
/*
Problem:https://leetcode.com/problems/merge-two-binary-trees/
Explaination->The simple approach would be to add the values if both nodes are not null and if either of them is null then return the node that is not null
*/
