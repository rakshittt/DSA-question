#include <iostream>
using namespace std;

int main(){

    // 1234
    // 1234
    // 1234
    // 1234 

    int n;
    cout<< " Enter any natural number n:" ;
    cin >>n;

    int i=1;

    while(i<=n)
    {
        int j=1 ;

        while(j<=n)
        {
            cout <<j<< " ";
              j=j+1;
        }
        cout<<endl;
      i=i+1;
    }
    
}