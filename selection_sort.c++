#include<iostream>
using namespace std;
class bubble{
    public:
    int arr[100],size;
    void input(){
        cout<<"ENTER THE SIZE OF ARRAY:";
        cin>>size;
        for(int i=0;i<size;i++){
            cout<<"ENTER THE "<<i<<" element :";
            cin>>arr[i];
        }
    }
    void print(){
        cout<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i];
        }
    }
    void sort(){
        for(int i=0;i<size-1;i++){
            int min=i;
            for (int j=i+1;j<size;j++){
                if(arr[j]<arr[min]){
                    min=j;
                }
            }
            if(min!=i){
                int temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
            }
    }}
};
int main(){
    bubble c;
    c.input();
    c.print();
    c.sort();
    c.print();
    c.input();
    c.print();
    c.sort();
    c.print();
}
