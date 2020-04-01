class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        int counter=0;
        vector<ListNode*> ret(k);
        ListNode* temp=root;
        while(temp)
        {
            counter++;
            temp=temp->next;
        }   
        int index=0;
        int lowIndex=counter/k;
        int highIndex=counter%k;
        temp=root;
        counter=1;
        while(temp)
        {
            if(ret[index]==0)
            {
                ret[index]=temp;
            }
            if(counter>=(lowIndex+(index<highIndex)))
            {
                counter=1;
                ListNode* tmp=temp;
                temp=tmp->next;
                tmp->next=NULL;
                index++;
            }
            else
            {
                counter++;
                temp=temp->next;
            }
        }
        return ret;
    }
};
/*
Problem:https://leetcode.com/problems/split-linked-list-in-parts/
Explaination->In this problem you have t divide your list in k parts with the equal parts mostly
Step 1:
  Find the length of the linked list
  and figure out how many parts will have extra one element
Step 2:
  then keep pushing N/kth element in the vector
*/
