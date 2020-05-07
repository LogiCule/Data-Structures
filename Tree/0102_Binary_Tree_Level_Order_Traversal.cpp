vector<vector<int>> ret;
class Solution {
public:
    void helper(TreeNode* root,int level)
    {
        if(!root)
            return;
        if(level>=ret.size())
            ret.resize(level+1);
        ret[level].push_back(root->val);
        helper(root->left,level+1);
        helper(root->right,level+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        ret.clear();
        helper(root,0);
        return ret;
    }
};
