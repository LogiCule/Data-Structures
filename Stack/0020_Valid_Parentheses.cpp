class Solution {
public:
    bool isValid(string s) {
        int index=0;
        stack<char> bracket;
        while(index<s.length() && s[index]!='\n')
        {
            if(s[index]=='(' || s[index]=='{' || s[index]=='[')
            {
                bracket.push(s[index]);
            }
            else
            {
                if(s[index]==')')
                {
                    if(!bracket.empty()  && bracket.top()=='(')
                    {
                        bracket.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else if(s[index]=='}')
                {
                    if(!bracket.empty()  && bracket.top()=='{')
                    {
                        bracket.pop();
                    }
                    else
                    {
                        return false;
                    }
                }else if(s[index]==']' )
                {
                    if(!bracket.empty()  && bracket.top()=='[')
                    {
                        bracket.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }
            index++;
        }
        if(bracket.size())
        {
            return 0;
        }
        return 1;
    }
};
/*
Problem:https://leetcode.com/problems/valid-parentheses/
Explaination->This is the noob problem to introduce someone to the concepts of stack
or teach them the application of stacks.
So this code usually works in the code editors you probably use
whenever you open a bracket it and do not close it ryt away it shows it right away in different ways depending upon the editor
its pretty easy
u take an empty staack and keep pushing whenever a brack is opened
and when you encounter a closing bracket check if the stack is not empty and on the top is the relative opening bracket
and if the stack is not empty by the end return false;
*/
