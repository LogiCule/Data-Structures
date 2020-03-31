class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp=head;
        if(!head)
        {
            return NULL;
        }
        while(head && head->val==val)
        {
            head=head->next;
        }
        temp=head;
        while(temp &&temp->next)
        {
            while(temp->next && temp->next->val==val)
            {
                temp->next=temp->next->next;
            }
            temp=temp->next;
        }
        return head;
    }
};
/*
Problem:https://leetcode.com/problems/remove-linked-list-elements/
 Explanation:I dont think this problem needs an explanation
 But I'll give it a shot
 So this is a simple deletion problem and all you got be carefull of is if the value at the head is the value to be deleted then you have to update the head
 otherwise you just got to delete the node with the given value
 
