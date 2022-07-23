#include <bits/stdc++.h>
using namespace std;

void solve (){

    int xa ,xb , xc;
    cin>> xa >> xb >> xc ;

    if(xa > 50 ){
        cout<< 'A' <<endl;
    }
    else if(xb > 50 ){
        cout<< 'B' <<endl;
    }
    else if(xc > 50 ){
        cout<< 'C' <<endl;
    }
    else {
        cout<< "NOTA"<<endl;
    }
}
int main(){

    int t;
    cin>>t;

    while(t--){
        solve();
    }
}