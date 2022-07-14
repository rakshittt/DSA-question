#include <iostream>
using namespace std;

int FirstOccu(int arr[], int size, int key){
    int start =0;
int end=size-1;
int ans=-1;
int mid= start + (end-start)/2 ;

while(start<= end){

    if (arr[mid]==key){
        ans =mid;
        end=mid-1;
    }
    else if(arr[mid]<key){
        start = mid+1;
    }
    else if(arr[mid]>key){
        end =mid-1;
    }
    mid= start + (end-start)/2 ;

    
}
   return ans;
}

int LastOccu(int arr[], int size, int key){
    int start =0;
int end=size-1;
int ans=-1;
int mid= start + (end-start)/2 ;

while(start<= end){

    if (arr[mid]==key){
        ans =mid;
        start= mid+1;
    }
    else if(arr[mid]<key){
        start = mid+1;
    }
    else{
        end =mid-1;
    }
    mid= start + (end-start)/2 ;

    
}
return ans;
}


int main(){
    int arr[6]={0,0,1,2,2,2};

    cout<<"First occurance of index at 2 :-> "<<FirstOccu(arr,6,2)<<endl;
    cout<<"Last occurance of index at 2 :-> "<<LastOccu(arr,6,2)<<endl;   

    return 0;
}