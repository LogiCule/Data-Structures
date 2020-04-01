class Solution {
public:
    Node* flatten(Node* root) {
        stack<Node*> nodes;
        Node* temp=root;
        while(temp)
        {
            if(temp->child)
            {
                if(temp->next)
                    nodes.push(temp->next);
                temp->next=temp->child;
                temp->child->prev=temp;
                temp->child=NULL;
                temp=temp->next;
            }
            else
            {
                if(!temp->next && !nodes.empty())
                {
                    temp->next=nodes.top();
                    temp->next->prev=temp;
                    temp=temp->next;
                    nodes.pop();
                }
                else
                {
                    temp=temp->next;
                }
            }
        }
        return root;
    }
};
/*
Problem:https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/
Explaination->
Flattening the list can be done in two ways
the first child found should added first
the last child found should be added first
they use a queue and stack respectively
since teh problem statement asks us to do the latter

we will be using stacks
so keep traversing the lists if we found that there is a child we push the next of that node onto the stack and change the next of the node to the 
child and keep doing it till the stack gets empty or we reach the end
*/
