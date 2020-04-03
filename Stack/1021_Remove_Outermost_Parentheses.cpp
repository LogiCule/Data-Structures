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
                    cout<<S[top];
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
*/
