#include <iostream>
using namespace std;

int main(){

    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10

    int n;
    cout<< "Enter any natural number n: ";
    cin>>n;

    int i=1;
       int count=0;

    while(i<=n){

    int j=1;
 

    while (j<=i){
        count =count+1;
        cout<< count << " " ;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
    }
}