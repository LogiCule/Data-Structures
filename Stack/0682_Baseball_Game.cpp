class Solution {
public:
    int calPoints(vector<string>& ops) {
        int num1;
        int num2;
        int index=0;
        stack <int> sta;
        std::string::size_type sz;   // alias of size_t
        while(index<ops.size())
        {
            string w=ops[index];
            if(w.compare("+")==0)
            {
                num1=sta.top();
                sta.pop();
                num2=sta.top();
                sta.push(num1);
                sta.push(num1+num2);
            }
            else if(ops[index].compare("D")==0)
            {
                sta.push(2*sta.top());
            }
            else if(ops[index].compare("C")==0)
            {
                sta.pop();
            }
            else
            {
                stringstream geek(ops[index]);
                int x=0;
                geek >> x;
                sta.push(x);
            }
            index++;
        }
        int sum=0;
        while(!sta.empty())
        {
            sum+=sta.top();
            sta.pop();
        }
        return sum;
    }
};
/*
Problem:https://leetcode.com/problems/baseball-game/
Explaination->Frankly this problem is pretty just use a stack to maintain the previous score so u can update the current sum
according to the given conditions\
*/
