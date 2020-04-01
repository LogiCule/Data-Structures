class Solution {
public:
    int numComponents(ListNode* head, vector<int>& G) {
        int size=G.size();
        ListNode* temp=head->next;
        int arr[10001]={0};
        for(int i=0;i<size;i++)
        {
            arr[G[i]]=1;
        }
        int sum=0;
        int curr=0;
        temp=head;
        while(temp)
        {
            if(arr[temp->val])
            {
                curr=1;
            }
            else
            {
                sum+=curr;
                curr=0;
            }
            temp=temp->next;
        }
        sum+=curr;
        return sum;
    }
    
};
/*
Problem:https://leetcode.com/problems/linked-list-components/
this probelm is easy when you know what data structure is right to use
to solve ,a hash table will do the trick
and i am gonna use an array to act as a hash table
but you can use a map , hashset anything you are comfy with
first put all the components in the hash table
now traverse the list
and add one to the total sum whenever u encounter an element not in the hash table
or u meet the end of the list
*/
