class MyStack {
    queue<int>q;;
    int size;
public:
    MyStack() {
        size=0;

    }
    
    void push(int x) {
        int s = q.size();
        q.push(x);
        size++;
        for(int i=1; i<=s; ++i){
            q.push(q.front());
            q.pop();
        }
        
        
    }
    
    int pop() {
        if(!empty()){
            int front = q.front();
            q.pop();
            size--;
            return front;
        }
        return -1;
    }
    
    int top() {
        if(!empty()){
            return q.front();
        }
        return -1;
    }
    
    bool empty() {
        if(size==0){
            return true;
        }
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */