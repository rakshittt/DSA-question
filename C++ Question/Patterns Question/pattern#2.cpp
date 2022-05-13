#include <iostream>
using namespace std;

int main(){

    // 123
    // 456
    // 789

   int n;
   cout<<"Enter any natural number n : " ; 
   cin>>n;

   int i=1;
   int sum=0;

   while(i<=n)
   {
       int j=1;
       while(j<=n)
       {
          sum=sum+1;
          cout<< sum<< " ";
          j=j+1;
       }
       cout<<endl;
       i=i+1;
   }

}