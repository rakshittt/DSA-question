#include <iostream>
using namespace std;


int FindUnique(int arr[], int size){
    int ans=0;
    for (int i=0;i<size;i++){
        ans =ans ^arr[i];
    }
    return ans;
}
int main(){

   int n;
   cin>>n;
   int numbers[1000];
   for(int i=0;i<n;i++){
       cin>>numbers[i];
   }

     int answer = FindUnique(numbers,n);

    cout<< "The answer is" <<" "<< answer;
    
 


}