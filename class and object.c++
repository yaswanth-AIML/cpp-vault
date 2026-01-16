#include<iostream>
using namespace std;
class cal
{
    public:
    int num1,num2,num3,operation1,operation2;
    cal()
    {
         cout<<"enter a value ";
         cin>>num1;
    }
    void input()
{    cin>>operation1;
    cin>>num2;
}
void calc()
{
    if(operation1==+)
    cout<<num1+num2;
    else if(operation==-)
    cout<<num1-num2;
    else if(operation==\)
    cout<<num1\num2;
    else
 
   }   cout<<num1*num2; 
};
int main()
{
    cal a;
    a.input();
    a.calc();
    return 0;


}


