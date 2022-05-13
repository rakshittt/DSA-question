#include <iostream>
using namespace std;

int main (){

    // ****
    //  ***
    //   **
    //    *

    int n; 
    cout <<" Enter any number";
    cin>> n;
    // Not Working
    int i=1;
    // Space =i-1
    while(i<=n){
       
       //print Spaces
       int space =i-1;
       while (space){
           cout<<" ";
           space=space-1;
       }

       //Print Stars
        int j= n-i+1;
        while(j)
       {
           cout<<"*";
        //    j=j+1;
       }
       cout<<endl;
       i=i+1;
    }

}