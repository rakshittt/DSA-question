#include <bits/stdc++.h>
using namespace std;

void solve(){

    vector <int> rook1(2);
    vector <int> rook2(2);

    for(int i=0;i<2;i++){
        cin>> rook1[i];
    }
    
    for(int i=0;i<2;i++){
        cin>> rook2[i];
    }

   if(rook1[0]== rook2[0] || rook1[1]==rook2[1]){
    cout<< "YES"<<endl;
   }else{
    cout<< "NO"<< endl;
   }

}

int main(){

    int t;
    cin>>t;

    while(t--){
        solve();
    }
}