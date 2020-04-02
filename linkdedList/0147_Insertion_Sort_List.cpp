class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        stack<ListNode*> sorted;
        stack<ListNode*> sorter;
        ListNode* temp=head;
        ListNode* next;
        while(temp)
        {
            if(sorted.empty() || sorted.top()->val<=temp->val)
            {
                sorted.push(temp);
            }
            else
            {
                while(!sorted.empty())
                {
                    if(sorted.top()->val<=temp->val)
                        break;
                    sorter.push(sorted.top());
                    sorted.pop();
                }
                sorted.push(temp);
                while(!sorter.empty())
                {
                    sorted.push(sorter.top());
                    sorter.pop();
                }
            }
            temp=temp->next;
        }
        next=NULL;
        while(!sorted.empty())
        {
            cout<<sorted.top()->val;
            sorted.top()->next=next;
            next=sorted.top();
            sorted.pop();
        }
        return next;
    }
};
/*
Problem:https://leetcode.com/problems/insertion-sort-list/
insertion sort in a linked list
use a stack
and push the node if the stack is empty or top is smaller
else keep pushing the value till u reach the previously mentioned conditions
*/
