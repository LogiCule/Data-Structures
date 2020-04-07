class Solution {
public:
    string removeOuterParentheses(string S) {
        int count=0;
        string word="";
        int top=0;
        while(top<S.length())
        {
            if(count>=1)
            {
                if(count==1 && S[top]==')')
                {count;}
                else
                {
                    word=word+S[top];
                }
            }
            if(S[top]=='(')
            {
                count++;
            }
            else if(S[top]==')')
            {
                count--;
            }
            
            
            top++;
        }
        return word;
    }
};
/*
Problem:https://leetcode.com/problems/remove-outermost-parentheses/
Explaination->this problem requires u to remove the outermost bracket so what we do is keep track of how many brackets are currently open
so we go to the stack if there is only one element in the stack that means one bracket is there so we do not count it
and do not asdd it to the string
and if the bracket is being closed we also check if closing this bracket will make the stack empty so we do not add this bracket to the result string
*/
