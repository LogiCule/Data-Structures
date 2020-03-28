class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* ret=l1;
        int carry=0;
        while(temp1 && temp2)
        {
            temp1->val+=temp2->val+carry;
            carry=temp1->val/10;
            temp1->val=temp1->val%10;
            temp2->val=temp1->val;
            temp1=temp1->next;
            temp2=temp2->next;   
        }
        if(temp1)
            {
                while(temp1 && carry!=0)
                {
                    temp1->val+=carry;
                    carry=temp1->val/10;
                    temp1->val=temp1->val%10;
                    temp1=temp1->next;
                }
                ret=l1;
            }
        else if(temp2)
        {
                while(temp2 &&carry!=0)
            {
                    temp2->val+=carry;
                    carry=temp2->val/10;
                    temp2->val=temp2->val%10;
                    temp2=temp2->next;
            }
            ret=l2;
        }
        if(carry)
        {
            temp1=ret;
            while(temp1->next!=NULL)
            {
                temp1=temp1->next;
            }
            temp1->next=new ListNode(carry);
            
        }
        return ret;
    }
};
/*
Problem:https://leetcode.com/problems/add-two-numbers/
Adding two numbers
Note: head of the linked list contains the LSD or least significant digit
There are 2 ways to create the returnable linked list:
  1)either make a new one
  2)or edit both the linked list return the long one.
 Now to the addition add the values of respective and mod it by 10
 and store the carry by moding the sum by 10
 if anyone of the list finishes then we add the carry to the remaining digits till there is no carry left
 then return the head1 or head2 accordingly
 and 
 if after addition a carry remains then make a new node with the value of carry and then append it to the returnable list.
*/
