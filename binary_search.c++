#include<iostream>
using namespace std;
int main(){
    int num;
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int length=sizeof(array)/sizeof(array[0]);
    int mid;
    int found=0;
    int low=0,high=length-1;
    cout<<"ENTER THE ELEMENT TO FIND:";
    cin>>num;
    while(low<high){
        mid=(low+high)/2;
        if(array[mid]==num){
            cout<<"ELEMENT WAS FOUND AT INDEX:"<<mid<<endl;
            found+=1;
            break;
        }
        else if(array[mid]<num){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(found==1)
    cout<<"ELEMENT WAS FOUND";
    else
    cout<<"ELEMENT WAS NOT FOUND";
}
