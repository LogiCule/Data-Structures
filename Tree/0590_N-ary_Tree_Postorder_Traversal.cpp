class Solution {
public:
    vector<int> postorder(Node* root) {
        stack <Node*> nodes;
        Node* temp;
        vector<int> ret;
        if(root)
        {
            nodes.push(root);
            while(!nodes.empty())
            {
                temp=nodes.top();
                nodes.pop();
                ret.insert(ret.begin(),temp->val);
                
                for(int i=0;i<temp->children.size();i++)
                {
                    nodes.push(temp->children[i]);
                }
                
            }
        }
        return ret;
    }
};
