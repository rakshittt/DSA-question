#include <iostream>
using namespace std;

int main(){

    // 1
    // 22
    // 333
    // 4444
    // 55555
    int n;
    cout<<"Enter any natural number n:";
    cin>> n; 

    int i=1;
    while(i<=n){

        int j=1;
        while(j<=i){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}

