class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL && l2==NULL)
        {
            return NULL;
        }
        if(l1==NULL)
        {
            return l2;
        }
        if(l2==NULL)
        {
            return l1;
        }
        ListNode* merged=l1->val<l2->val?l1:l2;
        ListNode* i=merged==l1?merged->next:l1;
        ListNode* j=merged==l2?merged->next:l2;
        ListNode* temp=merged;
        while(i!=NULL && j!=NULL)
        {
            if(i->val<=j->val)
            {
                temp->next=i;
                i=i->next;
            }
            else
            {
                temp->next=j;
                j=j->next;
            }
            temp=temp->next;
        }        
        if(i!=NULL)
        {
            temp->next=i;
        }
        if(j!=NULL)
        {
            temp->next=j;
        }
        return merged;
    }
};
/*  
Problem:https://leetcode.com/problems/merge-two-sorted-lists/

Extreme cases
1)if both linked list are empty
then return null
2)if one of the list is empty return the other one

now arranging of the new list
first appoint the head with the smaller value as the return value 
and then assign two pointers for both lists one each
 both pointer will point to the current value
 and the smaller value will be added to the end of merge and then moved
 till both lists are exhausted
