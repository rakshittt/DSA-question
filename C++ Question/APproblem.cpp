#include <iostream>
using namespace std;

// void Arithprog(int n){
//     int term ;
//     for(int i=0;i<n;i++){
//         term = (3*i+7);
//         cout<< term <<" ";
//     }
//     cout<<endl;

// }
// int main(){
//     int r;
//     cin>>r;
//     Arithprog(r);

//     return 0;


// }
int update(int a){
    a-=5;
    return a;
}
int main(){
    int a=15;
    update(a);
    cout<<a <<endl;
}