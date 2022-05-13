#include <iostream>
using namespace std;

int main(){

        // A B C
        // D E F 
        // G H I 

    int n;
    cout<< "Enter Any integer n : ";
    cin>>n;

    int i=1;
    
// Doubt 
    while(i<=n){

         int j=1;
        
        
        while(j<=n){
            char ch = 'A' +j -1 +i-1 ;
            cout<< ch <<" " ; 
            j=j+1;

        }
        
        cout<<endl;
        i=i+1;
       
        
        
    }

}