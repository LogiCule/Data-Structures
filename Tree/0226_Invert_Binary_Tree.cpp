class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return NULL;
        TreeNode* curr=root->left;
        root->left=root->right;
        root->right=curr;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};
/*
Problem:https://leetcode.com/problems/invert-binary-tree/
Explaination-> Keep interchaning the left and right nodes recursively till u reach the null
*/
