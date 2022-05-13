#include <iostream>
using namespace std;

int main (){

    //      *
    //     **
    //    ***
    //   ****

    int n ; 
    cout <<" Enter any number";
    cin>> n;

    int i=1;
   
    while(i<=n)
    {
        // Print spaces
       int space =n-i;
       while (space){
           cout<<" ";
           space=space-1;
       }

       // Print Starts 
       int j=1;
       while(j<=i)
       {
           cout<<"*";
           j=j+1;
       }
       cout<<endl;
       i=i+1;

    }



}