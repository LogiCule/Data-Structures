class MinStack {
public:
    /** initialize your data structure here. */
    stack <int> num;
    stack <int> min;
    public:
    MinStack() {
            }
    
    void push(int x) {
        this->num.push(x);
        if(this->min.empty() || this->min.top()>=x)
        {
            this->min.push(x);
        }
    }
    
    void pop() {
        int n=this->num.top();
        this->num.pop();
        if(n==this->min.top())
        {
            this->min.pop();
        }
    }
    
    int top() {
        return this->num.top();
    }
    
    int getMin() {
        return this->min.top();
    }
};
/*
Problem:https://leetcode.com/problems/min-stack/
the trick is simple maintain two stacks
one in which u push all the values and the other in which u only push if the valuie is smaller than the previous value or equal to it
*/
