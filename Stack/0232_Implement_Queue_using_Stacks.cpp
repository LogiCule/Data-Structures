class MyQueue {
    stack <int> s;
public:
    /** Initialize your data structure here. */
    MyQueue() {
       
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        this->s.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int temp,num;
        if(this->s.size()==1)
        {
            num=this->s.top();
            this->s.pop();
            return num;
        }
        else
        {
            temp=this->s.top();
            this->s.pop();
            num=this->pop();
            this->s.push(temp);
        }
        return num;
    }
    
    /** Get the front element. */
    int peek() {
        int temp,num;
        if(this->s.size()==1)
        {
            return this->s.top();
        }
        else
        {
            temp=this->s.top();
            this->s.pop();
            num=this->peek();
            this->s.push(temp);
        }
        return num;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return this->s.empty();
    }
};
/*
Problem:https://leetcode.com/problems/implement-queue-using-stacks/
Explaination is normally done via two stacks
but u can also do it with one stack and while using the recursion calls as the other stack
to get to the front u need to pop till u reach size one
and then return tthe value and keep pushing the popped values
*/
