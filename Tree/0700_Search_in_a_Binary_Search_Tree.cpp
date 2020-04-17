class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        while(root)
        {
            if(root->val==val)
                break;
            else if(root->val>val)
                root=root->left;
            else
                root=root->right;
        }
        return root;
    }
};
