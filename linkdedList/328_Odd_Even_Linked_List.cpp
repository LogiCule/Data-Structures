class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head)
        {
            if(!head->next)
                return head;
            ListNode* odd=head;
            ListNode* even=head->next;
            ListNode* temp=even?even->next:even;
            while(temp)
            {
                even->next=temp->next;
                even=even->next;
                temp->next=odd->next;
                odd->next=temp;
                odd=odd->next;
                temp=even?even->next:even;
            }
            
        }
        return head;
    }
};
/*
Problem:https://leetcode.com/problems/odd-even-linked-list/
All right lets rap
Step 1
  set the first node as odd
  set the head->next as even
step 2
  return if even or even->next is null
 step 3
  now take temp as even->next
  now all we have to do is insertion operation according to the problem statement
  insert the next of temp after even and update even
  insert the temp after odd and update odd and temp
 step 4 
  return head
*/
