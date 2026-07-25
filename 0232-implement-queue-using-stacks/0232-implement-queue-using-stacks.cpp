class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int> st1,st2;
    
    void push(int x) {
        
        while(st2.size() >=1)
        {
            st1.push(st2.top());
            st2.pop();
        }

        st1.push(x);
        while(st1.size() >=1){
            st2.push(st1.top());
            st1.pop();
        }





    }
    
    int pop() {
        int y= st2.top();
        st2.pop();
        return y;
    }
    
    int peek() {
        return st2.top();
    }
    
    bool empty() {
        if(st2.size() ==0)
            return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */