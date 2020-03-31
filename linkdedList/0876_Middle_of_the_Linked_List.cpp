class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* turtle = head;
        ListNode* rabbit = head;
        while (rabbit && rabbit->next) {
            turtle = turtle->next;
            rabbit = rabbit->next->next;
        }
        return turtle;
    }
};
/*
Problem: https://leetcode.com/problems/middle-of-the-linked-list/
Explanation-> This approach is pretty simple and it is known as "Floyd's Tortoise and Hare"
so what we do is we take two pointers and move the turtle pointer by one step 
and we move the rabbit pointer by two steps.
why does this method work when the rabbit pointer reaches the end the turtle is at the middle because 
in total he has traveled axactly the half of the distance covered by the rabbit.
*/
