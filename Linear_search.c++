#include<iostream>
using namespace std;
int main(){
    int num;
    int a=0;
    int array[10]={2,5,6,1,37,8,9,12,3};
    cout<<"ENTER THE ELEMENT TO FIND:";
    cin>>num;
    int length=sizeof(array)/sizeof(array[0]);
    if(length==0)
    cout<<"ARRAY LENGTH IS 0 CANT FIND ELEMENT";
    else{
    for(int i=0;i<length;i++){
        if(array[i]==num){
            cout<<"ELEMENT FOUND AT INDEX:"<<i;
            a=1;
            break;
        }
    }
    if(a==0)
    cout<<"ELEMENT WAS NOT FOUND";
}
}
