class Solution {
public:
    ListNode* reverse(ListNode* head)
    {
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
    bool isPalindrome(ListNode* head) {
        ListNode* rabbit=head;
        ListNode* turtle=head;
        if(!head || !head->next)
            return true;
        while(rabbit && rabbit->next &&rabbit->next->next)
        {
            turtle=turtle->next;
            rabbit=rabbit->next->next;
        }
        turtle->next=reverse(turtle->next);
        ListNode* temp=turtle->next;
        turtle->next=NULL;
        turtle=head;
        while(temp)
        {
            if(temp->val!=turtle->val)
            {
                return false;
            }
            temp=temp->next;
            turtle=turtle->next;
        }
        return true;
    }
};
/*
Problem:https://leetcode.com/problems/palindrome-linked-list/
Explaination-> 
1) The approach I used previously which takes up space
insert all the values of the nodes in a vector and then compare them from both ends till the middle using two pointer approach
obviously this makes the use of linked list redundant
2)This is a O(N) time and constant space approach
it consists of three parts:-
  a)get the middle of the list
  b)reverse the second half of the list
  c)then traverse both simultaneously whilst comparing them
    if they all are equal then its palindromic
*/
