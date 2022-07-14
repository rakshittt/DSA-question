#include <iostream>
using namespace std; 

int binarySearch(int arr[], int size, int key ){

int start =0;
int end=size-1;
int mid= start + (end-start)/2 ;

while(start<= end){

    if (arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
        start = mid+1;
    }
    else{
        end =mid-1;
    }
    mid= start + (end-start)/2 ;

    return -1;
}
}
int main (){

    int even[6] ={2,4,8,16,20,26};
    int odd[5] ={3,5,9,15,19};
    
   cout<<binarySearch(even,6,8)<<endl;
   cout<<binarySearch(odd,5,10);
}