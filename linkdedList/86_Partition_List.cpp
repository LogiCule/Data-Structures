class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp=head;
        ListNode* low=NULL;
        ListNode* high=NULL;
        ListNode* temp1;
        ListNode* temp2;
        while(temp)
        {
            if(temp->val<x)
            {
                if(low)
                {
                    temp1->next=temp;
                }
                else
                {
                    low=temp;
                }
                temp1=temp;
                temp=temp->next;
                temp1->next=NULL;
            }
            else
            {
                if(high)
                {
                    temp2->next=temp;
                }
                else
                {
                    high=temp;
                }
                
                temp2=temp;
                temp=temp->next;
                temp2->next=NULL;
            }
        }
        if(low && temp1)
            temp1->next=high;
        else if(!low && high)
            low=high;
        return low;
    }
};
/*
Problem:https://leetcode.com/problems/partition-list/
this problem is gonna be solved via a non traditional application of a traditional approach
The Two pointer approach
one pointer will keep the track of end of lower values and the other pointer will take care of the rest in the order they arrived
Whilst traversing the nodes sequentially
append the lower values to the end of the low pointer
and append the other values to end of the high
and at the end point the head of high values by the tail of the lowpointer
*/
