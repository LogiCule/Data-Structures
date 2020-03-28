class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        stack<int> nodes;
        stack<int> max;
        if(!head)
        {
            vector<int> ret;
            return ret;
        }
        int len=0;
        while(head)
        {
            nodes.push(head->val);
            head=head->next;
            len++;
        }
        vector<int> ans(len);
        for(int i=len-1;i>=0;i--)
        {
            while(!max.empty() && max.top()<=nodes.top())
            {
                max.pop();
            }
            if(max.empty())
            {
                ans[i]=0;
            }
            else
            {
                ans[i]=max.top();
            }
            
            max.push(nodes.top());
            nodes.pop();
        }
        return ans;
    }
};
/*
Problem:https://leetcode.com/problems/next-greater-node-in-linked-list/
in this problem we have to create an array or vector which carry the next greater value of the respective element.
So it is better to start from the last element.
we will maintain two stacks one that carry the max values
and the other will contain the values of the linked list in reverse order.
the max stack is empty.

step 1:
  we pop the stack till its empty or the top value is greater than the current value
step 2:
  if the stack is empty we put 0 at the respective index 
  else
  we put the top of max at the respective index.
 Step 3:
  push the current value in max stack
  pop the current value from the linkde stack
 Step 4:
  return the created vector
*/
