#include<iostream>
using namespace std;
class quick {
public:
    int arr[100], size;
    void input() {
        cout<<"ENTER THE SIZE:";
        cin >> size;
        for(int i=0; i<size; i++){
        cout<<"ENTER THE :"<<i<<"Th ELEMENT";
        cin >> arr[i];
        }
    }
    void print() {
        for(int i=0;i<size;i++){
        cout << arr[i];
        cout << endl;
        }
    }
    int partition(int low,int high) {
        int pivot = arr[high];
        int i=low-1;
        for(int j=low;j<high;j++) {
            if(arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i+1],arr[high]);
        return i+1;
    }
    void quickSort(int low,int high) {
        if(low < high) {
            int pi = partition(low, high);
            quickSort(low, pi-1);
            quickSort(pi+1, high);
        }
    }
};
int main() {
    quick q;
    q.input();
    q.quickSort(0, q.size-1);
    q.print();
    return 0;
}
