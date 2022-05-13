#include  <iostream>
using namespace std;

int main (){

    // A
    // B C
    // C D E
    // D E F F 

    int n;
    cout<<"Enter any number";
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while (j<=i)
        {
            char ch= 'A'+ i + j -2;
            cout << ch ;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}