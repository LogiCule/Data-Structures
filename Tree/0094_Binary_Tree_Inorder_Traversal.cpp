class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> inOrder;
        TreeNode* temp;
        vector<int> ret;
        if(root)
        {
            inOrder.push(root);
            while(!inOrder.empty())
            {
                temp=inOrder.top();
                if(temp->left)
                {
                    inOrder.push(temp->left);
                    temp->left=NULL;
                }
                else
                {
                    inOrder.pop();
                    ret.push_back(temp->val);
                    if(temp->right)
                    {
                        inOrder.push(temp->right);
                        temp->right=NULL;
                    }
                }
            }
        }
        return ret;
    }
};
/*
Problem:https://leetcode.com/problems/binary-tree-inorder-traversal/
Explaination-> Normally this problem would be easy if done recursively.
Lets try iteratively.
1. Use a stack to maintain the order of visiting nodes.
2. Push root value onto the stack.
3. while the stack is not empty
4. push the left value if not null then then update ur visiting table that left of this has been visited.
I did it by updating the left of the root to null after pushing it onto the stack.
5.else push the value in the return array and pop it and push its right onto the stack.

*/
