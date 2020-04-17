class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        if(root==NULL)
            return 0;
        if(root->val<L)
            return rangeSumBST(root->right,L,R);
        else if(root->val>R)
            return rangeSumBST(root->left,L,R);
        else
            return root->val+rangeSumBST(root->left,L,R)+rangeSumBST(root->right,L,R);
    }
};
/*
Problem:https://leetcode.com/problems/range-sum-of-bst/
Explaination->This problem can be solved iteratively or recursively.
Do whichever suits you,When doing recursion this works as a dfs approach,its quite simple
we only add those values if they lie within the range and call their left or right accordingly
suppose if a value is lesser than the lower limit then it does make any sense to call the unction on its left node 
hence we only call the function on its right node if it exits
*/
