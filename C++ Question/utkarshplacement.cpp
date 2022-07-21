#include <bits/stdc++.h>
using namespace std;

void solve(){

    vector <char> priority(3);

    for(int i=0;i<3;i++){
        cin>> priority[i];
    }
    char x,y;
    cin >> x>>y;
    int ans1 , ans2;
    for(int i=0;i< 3 ; i++){
        if(priority[i]==x){
            ans1 = i;
        }
        if(priority[i]==y){
            ans2 =i;
        }
    }

    if(ans1 > ans2){
        cout<< priority[ans2]<< endl;
    }
    else{
        cout<< priority[ans1]<<endl;
    }
        

}

int main(){

    int t;
    cin>>t;
    while(t--){
        
        solve();
    }
}