class Solution {
public:
    vector<int> preorder(Node* root) {
        stack<Node *> ret;
        Node* temp;
        vector<int> ans;
        if(root)
        {
            ret.push(root);
            while(!ret.empty())
            {
                temp=ret.top();
                ret.pop();
                ans.push_back(temp->val);
                for(int i=temp->children.size()-1;i>=0;i--)
                {
                    ret.push(temp->children[i]);
                }
            }
        }
        return ans;
    }
};
