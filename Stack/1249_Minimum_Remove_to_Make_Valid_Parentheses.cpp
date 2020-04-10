class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char> stck;
        int index=0;
        int countLeft=0;
        int countRight=0;
        int size=s.length();
        while(index<size)
        {
            if(s[index]=='(')
            {
                stck.push('(');
            }
            else if(!stck.empty() && s[index]==')')
            {
                stck.pop();
                countRight++;
            }
            index++;
        }
        countLeft=countRight;
        string wrd="";
        index=0;
        while(index<s.length())
        {
            if(countRight>0 && s[index]=='(')
            {
                countRight--;
                wrd+=s[index];
            }
            else if(countLeft>0 && countLeft>countRight && s[index]==')')
            {
                countLeft--;
                wrd+=s[index];
            }
            else if(s[index]!='(' && s[index]!=')')
            {
                wrd+=s[index];
            }
            index++;
        }
        return wrd;
    }
};
/*
Problem->https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/
Explaination:I used a stack to track the number of valid pair braces in the string then traversed the string and added only th valid number of brackets using two counts
left count and ryt count
*/
