#include <iostream>
using namespace std;

int main(){

    // AAA 
    // BBB
    // CCC

    int n;
    cout<< "Enter Any integer n : ";
    cin>>n;

    int i=1;

    while(i<=n){

        int j=1;

        while(j<=n){
            char ch = 'A' + i-1 ;
            cout<< ch <<" " ; 
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }

}