class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
        if(root==NULL)
            return NULL;
        root->left=pruneTree(root->left);
        root->right=pruneTree(root->right);
        if(!root->left && !root->right && root->val==0)
            return NULL;
        return root;
    }
};
/*
Problem:https://leetcode.com/problems/binary-tree-pruning/
Explaination->This problem can be solved while traversing through the tree depth wise.
return if the node is null
else u call the function on both its children and alter their values accordingly.
if there is a subtree without the value of one,then null will be returned

*/
