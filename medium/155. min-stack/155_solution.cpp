class MinStack {
public:
int arr[200000];
int topEl;
    MinStack() {
        topEl=-1;
    }
    
    void push(int val) {
        int currMin=(topEl<1) ? val : min(val,arr[topEl]);
        arr[++topEl]=val;
        arr[++topEl]=currMin;
    }
    
    void pop() {
        if(topEl>=1) topEl-=2;
    }
    
    int top() {
        return arr[topEl-1];
    }
    
    int getMin() {
        return arr[topEl];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */