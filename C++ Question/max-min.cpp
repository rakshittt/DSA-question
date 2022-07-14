#include <iostream>
using namespace std;

// Max value in the array
int MaxVal (int arr[], int n){
    int maxi= INT16_MIN;

    for(int i=0;i<n;i++){
        // if(arr[i]>max){
        //     max = arr[i];
        // }
        maxi = max(maxi,arr[i]);
    }
    return maxi;
}

// Min value in the array
int MinVal (int arr[], int n){
    int min= INT16_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}




int main (){
    int size;
    cin>>size;
    int num[100];

    for(int i=0;i<size;i++){
        cin>> num[i];
    }

    cout<<" Maximum value is" << MaxVal(num,size) << endl;
    cout<< " Minimum value is "<< MinVal(num,size) << endl;
}