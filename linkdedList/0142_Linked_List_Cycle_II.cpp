class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        set<ListNode*> nodes;
        while(head)
        {
            if(nodes.find(head)!=nodes.end())
            {
                return head;
            }
            nodes.insert(head);
            head=head->next;
        }
        return NULL;
    }
};
/*
Probelm:https://leetcode.com/problems/linked-list-cycle-ii/
Explaination->while traverseing the nodes push the nodes into a set if not in the set
and if u encounter a node again return it
or if u reach null then just return null
*/
