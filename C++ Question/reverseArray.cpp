#include <iostream>
using namespace std;

void reverseArray(int num[], int n ){

    int start =0;
    int end=n-1;

    while(start<=end){
        swap(num[start],num[end]);
        start++ ;
        end--;

    }
}

int main(){
    int size;
    cin>>size;
    int arr[10000];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    reverseArray(arr,size);

    for (int i=0; i<size ;i++){
        cout<<arr[i]<<" ";
    }
}