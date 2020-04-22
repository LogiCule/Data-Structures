class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)
            return true;
        if(p && q && p->val==q->val)
            return true && isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        else
            return false;
    }
};
/*
Problem:https://leetcode.com/problems/same-tree/
Explaination->Both tree will be same if the left subtree of the first tree is same as that of the second tree.
same goes for the right tree.
Note: if any subtree of both trees is null then it is considered as same.
*/
