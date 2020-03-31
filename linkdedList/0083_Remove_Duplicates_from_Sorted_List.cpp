class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        while(temp!=NULL)
        {
            ListNode* nextNode=temp->next;
            while(nextNode!=NULL && nextNode->val==temp->val)
            {
                nextNode=nextNode->next;
            }
            temp->next=nextNode;
            temp=nextNode;
        }
        return head;
        
    }
};
/*
Problem:https://leetcode.com/problems/remove-duplicates-from-sorted-list/
The Probelm Statement states the removal of duplicates in a sorted list
So it is pretty simple just make the current node point to next dis-similar node
or in simple words
keep changing the next of the current node till u encounter a dissimliar node
do this for all unique and consequetive nodes
*/
