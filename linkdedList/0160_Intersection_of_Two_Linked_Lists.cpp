class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int count1=0;
        int count2=0;
        ListNode *temp1=headA;
        while(temp1)
        {
            count1++;
            temp1=temp1->next;
        }
        temp1=headB;
        while(temp1)
        {
            count2++;
            temp1=temp1->next;
        }
        temp1=count1>count2?headA:headB;
        ListNode * temp2=temp1==headB?headA:headB;
        int max=count1>count2?count1-count2:count2-count1;
        while(max--!=0)
        {
            temp1=temp1->next;
        }
        while(temp1 && temp2 && temp1!=temp2)
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return temp1;    
    }
};
/*
Problem:https://leetcode.com/problems/intersection-of-two-linked-lists/
Explanation->
1) lets start with the approach that I didnt code.
we can use 2 stacks for each linked list and we push each node of the lists in the respective stacks
and now we will start popping the nodes from stack while the values are same and
we keep storing the popped value and as soon as we encounter two different nodes we return the previously popped node.
this approach takes linear time but takes extra space O(N).

2)This approach seems lengthy but it has a linear time complexity and takes up consant space.
we first traverse each list separately and count their lengths.
then we subtract the maxlength with the minlength and traverse the longer list (max-min) times.
now both lists are of same length.
so we traverse till we reach null or same node.
*/
