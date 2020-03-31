class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *rev=head;
        if(rev==NULL)
        {
            return NULL;
        }
        if(rev->next==NULL)
        {
            return rev;
        }
        ListNode *temp1=head->next;
        
        ListNode *temp2=head;
        rev->next=NULL;
        while(temp2!=NULL)
        {
            temp2=temp1!=NULL?temp1->next:NULL;
            temp1->next=rev;
            rev=temp1;
            temp1=temp2;
            
        }
        return rev;
        
    }
};
/*
Problem:https://leetcode.com/problems/reverse-linked-list/
Explaination->If we look at the problem carefully all we have to do is make a node point to its previous node and return the last node.
the way it works it
since the first node's previous node is null we make it point to null then the second node will point to the first node and it goes on.
so how does the swap work:-
first set prev as NULL and then curr=head
and we start the traversal and first save the next of the curr and then update the value of curr->next by prev and then prev =curr
and curr=next
till curr becomes null
finally return next
*/
