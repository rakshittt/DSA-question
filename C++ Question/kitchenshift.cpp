#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    // No. of Students
    cin>> n ;

    // A stored vector 
    vector <int> A(n);

    for(int i=1;i<=n ;i++){
        cin>> A[i];
    }

    // B stores
     vector <int> B(n);

    for(int i=1;i<=n ;i++){
        cin>> B[i];
    }

    int count = 0;
    for(int i=n-1;i>=1 ;i--){
        
         int diff = A[i]-A[i-1];
         if(B[i] <= diff){
            count++;

        }
    };

    cout<< count <<endl;
}

int main(){

    int t;
    cin>>t;

    while(t--){
        solve();
    }
}