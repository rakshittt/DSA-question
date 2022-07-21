#include<bits/stdc++.h>
using namespace std;

void solve(){

    int X,A,B;
    cin>>X>>A>>B;

    int solub = A + (100-X)*B;

    int ans = solub * 10 ;
    cout<< ans<<endl;

}

int main(){

    int t;
    cin>> t;
    while(t--){
        solve();
    }
}