#include <iostream>

using namespace std;

void merge (int arr1[],int n , int arr2[],int m,int arr3[]){
    int i=0 ,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }

    // Copy first array 
     while(i<n){
         arr3[k++]=arr1[i++];
     }
     // Second array ==0

     while(j<m){
         arr3[k++]=arr2[j++];
     }
    
}
void print (int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[5]={1,2,3,5,7};
    int arr2[3]={4,6,8};

    int arr3[8]={0};

    merge(arr1,5,arr2,3,arr3);

    print(arr3,8);
   


}