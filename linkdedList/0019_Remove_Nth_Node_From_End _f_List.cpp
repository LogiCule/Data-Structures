class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int count=0;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        count=count-n;
        if(count==0)
        {
            return head->next;
        }
        
        temp=head;
        while(temp && count>1)
        {
            temp=temp->next;
            count--;
        }
        temp->next=temp->next->next;
        return head;
    }
};
/*
Problem:https://leetcode.com/problems/remove-nth-node-from-end-of-list/
Step 1
  Count the number of nodes in the linked list by traversing through the whole list
Step 2
  Traverse the list for count -n -1 steps
Step 3
  Delete the next node 
Step 4
  check for 0 difference
  if(count-n)==0
    return the next of head;
Step 5
  return head
*/
