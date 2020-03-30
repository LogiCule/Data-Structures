class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head)
            return false;
        ListNode* turtle=head;
        ListNode* rabbit=head->next;
        while(rabbit && rabbit->next)
        {
            if(turtle==rabbit)
            {
                return true;
            }
            rabbit=rabbit->next->next;
            turtle=turtle->next;
        }
        return false;
    }
};
/*
Problem:https://leetcode.com/problems/linked-list-cycle/
The turtle and rabbit are back for a race
now this problem may seem easy if u relate it to a race track and the objective is to check if the race track is finite or is a infinite round trip
to check this we will need two participants
the rabbit and the turtle
as usual run at their own speed
the rabbit runs so fast that it either wins the race or overtakes the turtle
depending on the track
I hope this analogy made the logic of the code quite clear to you.
*/
