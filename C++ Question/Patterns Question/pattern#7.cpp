#include <iostream>
using namespace std;

int main()
{
//    1
//    2 1
//    3 2 1
//    4 3 2 1

 int n;
 cout<< "Enter any natural number n: " ;
 cin>>n;

 int i=1;
 while(i<=n)
 {
     int j=1;
     int count=i;
     while(j<=i)
     {
         cout<<count<<" ";
         count=count-1;
         j=j+1;
         
     }cout<<endl;
     i=i+1;
 }

}