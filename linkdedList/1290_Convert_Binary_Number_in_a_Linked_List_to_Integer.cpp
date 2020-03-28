class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        int result=0;
        while(temp)
        {
            result=result<<1|temp->val;
            temp=temp->next;
        }
        return result;
    }
};
/*
Problem: https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
Explation: each node contirbutes information of one bit
since the head contains the value of MSB or most significant bit 
so we repeatedly extract each bit till we reach the end of linked list
and while extracting the bit we left-shift the prev value of result and then 
do an OR operation between the extracted value and the shifted value of the result;
*/
