#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for (int  i = 0; i < n; i++)
    {
        cin>>n;

    }
    
    int ans=0;

    for (int  i = 0; i < n; i++)
    {
        /* code */
        ans= ans ^ arr[i];
    }

    for (int  i = 1; i < n; i++)
    {
        /* code */
        ans =ans ^i;
    }

    cout<<ans<<endl;
    
    
}