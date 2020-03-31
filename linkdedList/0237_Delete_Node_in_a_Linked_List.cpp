class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
    }
};
/*
Problem:https://leetcode.com/problems/delete-node-in-a-linked-list/
First look at the problem statement
you have to delete the value of the node which is provided to you.
This confused me at first.
When you calm down and think about it it is still pretty easy
what you have to do is copy th next node into this node you are given
and boom this node vanishes
*/
