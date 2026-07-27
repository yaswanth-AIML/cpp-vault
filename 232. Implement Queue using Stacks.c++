class MyQueue {
public:
vector<int>s;
int f=0;
    MyQueue() {}
    void push(int x) {
        s.push_back(x);  
    }
    int pop() {
        if(s.empty())
        return -1;
    f=s.front();
    s.erase(s.begin());
    return f;
    }
    int peek() {
       if(s.empty())
        return -1;
        else
        return s.front();
    }
    bool empty() {
      if(s.empty())
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
