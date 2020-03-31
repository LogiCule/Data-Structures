class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp&& temp->next)
        {
            ListNode* next=temp->next->next;
            ListNode* swap=temp;
            temp=temp->next;
            temp->next=swap;
            swap->next=next;
            if(prev)
            {
                prev->next=temp;
            }
            else
            {
                head=temp;
            }
            prev=temp->next;           
            temp=next;   
        }
        return head;
    }
};
/*
Problem:https://leetcode.com/problems/swap-nodes-in-pairs/
This problem is quite simple despite being in the medium category
the thought process to solve this problem  depends
if you want to swap the nodes or just the values
it gets even easier if you want to swap just the values
coz there is no need to worry abt the addresses
keep swapping values till pairs exist and then update the current pointer by two steps.
*/
