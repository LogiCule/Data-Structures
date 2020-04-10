class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        int len=T.size();
        vector<int> ans(len);
        stack<int> nodes;
        for(int i=len-1;i>=0;i--)
        {
            if(nodes.empty())
            {
                ans[i]=0;
            }
            else
            {
                while(!nodes.empty())
                {
                    int top=nodes.top();
                    if(T[i]<T[top])
                    {
                        ans[i]=top-i;
                        break;
                    }
                    else
                    {
                        nodes.pop();
                    }
                }
                if(nodes.empty())
                {
                    ans[i]=0;
                }
            }
            nodes.push(i);
        }
        return ans;
    }
};
/*
Problem:https://leetcode.com/problems/daily-temperatures/
Explaination->Start the back so we can check if we have encountered a biger value or not
and store the numbers in the stack.
*/
