#include <iostream>
using namespace std;

int main(){



    // 1234554321
    // 1234**4321
    // 123****321
    // 12******21
    // 1********1

    int n;
    cout<<"Enter any number";
    cin>>n;

    // divide Question into 4 parts 
    // 1st part 
    //     12345
    //     1234
    //     123
    //     12
    //     1
    
    // 2nd Part 
    // _____
    // ____*
    // ___**
    // __***
    // _****

    int i=1;
    int sum=1;
    while(i<=n)
    {
        cout<<sum;
        sum=sum+1;
    }
    // Pura nahi hua ! 


}