#include <iostream>
using namespace std;

void swapAlternate(int arr[], int n ){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap( arr[i],arr[i+1]);
            // Alternative swap method
            // temp=num1;
            // num1=num2;
            // num2=temp;
        };
    };
};

void printArray(int arr[], int n ){
    for (int j=0;j<n;j++){
        cout<< arr[j]<<" ";
    }
    cout<<endl;
}

int main(){

    int even[6]={2,3,5,6,12,34};
    int odd[5]={12,34,56,5,78};

    swapAlternate(even,6);
    swapAlternate(odd,5);

    printArray(odd,5);
    printArray(even,6);

}