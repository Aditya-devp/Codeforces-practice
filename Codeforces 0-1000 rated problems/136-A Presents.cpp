#include <iostream>
using namespace std;
int main(){
    int size,element;
    cin>>size;
    int arr[size];
    for(int i=1;i<=size;i++){
        cin>>element;
        arr[element]=i;
    }
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
    }
}
