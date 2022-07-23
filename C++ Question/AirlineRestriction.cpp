#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;

   if( (A+B <=D && C<=E) || (B+C <=D && A <=E) || (A+C <=D && B<= E)){
    cout<< "YES" << endl;
   }
   else{
    cout<< "NO" <<endl;
   }


};
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}