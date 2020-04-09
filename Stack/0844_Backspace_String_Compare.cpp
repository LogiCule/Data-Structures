class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack <char>S_stack;
        stack <char>T_stack;
        int index=0;
        while(index < S.length())
        {
            if(S[index]=='#')
            {
                if(!S_stack.empty())
                {
                    S_stack.pop();
                }
            }
            else
            {
                S_stack.push(S[index]);
            }
            index++;
        }
        index=0;
        while(index<T.length())
        {
            if(T[index]=='#')
            {
                if(!T_stack.empty())
                {
                    T_stack.pop();
                }
            }
            else
            {
                T_stack.push(T[index]);
            }
            index++;
        }
        while(!S_stack.empty() && !T_stack.empty())
        {
            if(S_stack.top()!=T_stack.top())
            {
                cout<<S_stack.top()<<" "<<T_stack.top();
                return false;
            }
            S_stack.pop();
            T_stack.pop();
        }
        if(!T_stack.empty() || !S_stack.empty())
        {
            return false;
        }
        return true;
    }
};
/*
Problem:https://leetcode.com/problems/backspace-string-compare/
Explaintation->It is pretty straight forward
to know the real strings we have to remove the characters that the backspaces would remove
maintain two stacks ,one for each string
then linearly push the elements into it and if u encounter a backspace pop the stack if non empty
and then after it is done
u can compare both stacks if they are equal of not
if both are empty then it is also equal
*/
