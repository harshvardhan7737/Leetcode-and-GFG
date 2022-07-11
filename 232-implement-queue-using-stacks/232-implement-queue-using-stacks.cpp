class MyQueue {
public:
    stack<int> q1,q2;
    int ans = 0;
    
    void push(int x) {
    q1.push(x);        
    }
    
    int pop() {
    if(!q2.empty())
        {
         ans = q2.top();
        q2.pop();
         return ans;
        }
        else
        {
            while(!q1.empty())
            {
            q2.push(q1.top());
            q1.pop();
            }
            
             ans = q2.top();
            q2.pop();
            return ans;
        }

    }
    
    int peek() {
        
         if(!q2.empty()){
        return q2.top();
       
    }
         else{
        while(!q1.empty()){
            q2.push(q1.top());
            q1.pop();
            
        }
          return q2.top();
    }
    }
    
    bool empty() {
        if(q2.empty()&&q1.empty()){
        return true;
    }
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