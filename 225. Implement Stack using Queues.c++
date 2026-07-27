class MyStack {
public:
    vector<int> arr;
    int top1=-1,last=0; 
    MyStack() { 
    }
    void push(int x) {
        arr.push_back(x);
        top1+=1;
    }
    int pop() {
        if(top1>=0){
        last=arr.back();
        arr.pop_back();
        top1-=1;
        return last;
        }
        return -1;
    }
    int top() {
        if(top1>=0)
        return arr.back();
        else
        return -1;
    }
    bool empty() {
        if(top1<0)
        return true;
        else
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
