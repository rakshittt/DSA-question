#include <iostream>
using namespace std;

int fact (int num){
    int factorial =1;
   for(int i=1; i<=num ;i++){
       factorial =factorial *i;
   }
   return factorial;
}

int ncr (int n,int r){

    int num = fact(n);
    int deno = fact(r)*fact(n-r);

    int ans =num/deno;

    return ans;
}

int main(){
    int n,r;
    cin>>n>>r;
    // int ncr = fact(n)/(fact(r)*fact(n-r));
    
    cout<< ncr(n,r)<<endl;

    return 0 ;
}