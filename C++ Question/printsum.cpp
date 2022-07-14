#include <iostream>
using namespace std;

int sum(int arr[], int n ){
    
    int sum=0;
     for(int j=0;j<n;j++){
        sum= sum + arr[j];

    }

    return sum;
}

int main (){
    int size;
    cout<<"Enter the size of the array"<< " ";
    cin>>size;
    
    int num[100000];

    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    int answer = sum(num,size);

    // int sum=0;
    // for(int j=0;j<size;j++){
    //     sum= sum + num[j];

    // }
    cout<< " The sum of elements of array "<< answer <<endl;
}