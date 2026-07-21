#include<iostream>
using namespace std;
int main(){
int arr[5]={1,2,3,4,5};
int length=sizeof(arr)/sizeof(arr[0]);
int max1=0;
for(int i=0;i<length;i++){
    int curr=0;
    for(int j=i;j<length;j++){
        curr+=arr[j];
        max1=max(max1,curr);
    }
}
cout<<max1;
}
