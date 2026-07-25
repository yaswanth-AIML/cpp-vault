#include<iostream>
#include<vector>
using namespace std;
class Stack{
    public:
    vector<int> stack;
    int top=-1;
    void push(int val){
        stack.push_back(val);
        top+=1;
    }
    int pop(){
        if(top<0){
            cout<<"CANT POP WHEN EMPTY";
            return -1;
        }
        else{
            top-=1;
            int val=stack.back();
            stack.pop_back();
            return val;
        }
    }
    int topof(){
        if(top<0){
            cout<<"STACK IS EMPTY";
            return -1;
        }
        else{
            return stack[top];
        }
    }
    int isempty(){
        if(top<0){
            cout<<"YES EMPTY";
            return 1;
        }
        else{
            cout<<"STACK IS NOT EMPTY";
            return 0;
        }
    }
    int length(){
        return stack.size();
    }
};
int main(){
    Stack s1;
    while(true){
        int op;
        cout<<"ENTER 1 for PUSH\nENTER 2 for POP\nENTER 3 for TOP\nENTER 4 for ISEMPTY\nENTER 5 for length\nENTER 6 for EXIT\nENTER: ";
        cin>>op;
        switch(op){
            case 1:
            int val;
                cout<<"ENTER THE ELEMENT TO PUSH:";
                cin>>val;
                s1.push(val);
                break;
            case 2:
                cout<<s1.pop()<<endl;
                break;
            case 3:
                cout<<s1.topof()<<endl;
                break;
            case 4:
                cout<<s1.isempty()<<endl;
                break;
            case 5:
                cout<<s1.length()<<endl;
                break;
            case 6:
                return 0;
            default:
                cout<<"ENTER THE CORRECT OPERATION";


        }
    }
}
