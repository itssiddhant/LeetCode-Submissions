// https://leetcode.com/problems/implement-queue-using-stacks

class MyQueue {
    stack<int> s1,s2;
public:
    void push(int x) {
        s1.push(x);
    }
    int pop(void) {
        if (s2.empty()) {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
    }
    s2.pop();
    return 1;
    }
    int peek(void) {
        if (s2.empty())
            while (s1.size()) s2.push(s1.top()),s1.pop();
        return s2.top(); 
    }
    bool empty(void) {
        return s1.empty() && s2.empty();
    }
};