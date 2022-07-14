// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    // Poora Answer Sahi nahi hua haii 
    // Codestudio Contest 1 Q1 
  
     int t , n, m;
    // cin >> t;
    
    // while(t>0){
        
    cin>> n >> m ;
    int  arr[100];
    // vector <int> arr;
    
   for(int  i=0;i<n ;i++){
       cin >> arr[i];
   }
    
  sort(arr , arr+n);

//   for(int i=0;i<n ;  i++ ){
//     cout<< arr[i]<<" ";
//   }

  
    
    int sum =0;
    for(int j=n-m-1; j<=n-1; j++){
       sum = sum + arr[j];
    }
    cout<< sum<< endl;
    // t--;
    // }
    return 0;
}