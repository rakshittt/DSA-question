#include <bits/stdc++.h>
using namespace std;

int sum(vector <int> arr){

    int sumi =0 ;

    for(int i=0;i<3;i++){
        sumi += arr[i]; 
    }

    return sumi;    
}

void solve (){

    vector <int> country1(3);
    vector <int> country2(3);

    for(int i=0 ;i<3 ;i++){
        cin>> country1[i];
    }
    for(int i=0;i<3 ; i++){
        cin >> country2[i];
    }

    int total1 = sum(country1);
    int total2 = sum(country2);

    if(total1> total2){
        cout<<'1'<<endl;
    }
    else{
        cout<<'2'<<endl;
    }


}

int main(){

    int t ;
     cin >> t;
     while(t--){
        solve();
     }
}