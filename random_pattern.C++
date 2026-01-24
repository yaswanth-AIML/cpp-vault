#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=1;i<=17;i++)
    {
       if(i<=5||i==7||i==11||(i>=13&&i<=17))
       cout<<"*";
       else if(i==6||i==12)
       cout<<endl;
       else
       cout<<" ";
    }
    
}