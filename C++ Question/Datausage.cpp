#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n, k;
    cin >> n >> k;

    int T[n];
    int D[n];

    for (int i = 0; i < n; i++)
    {
        int t, d;
        cin >> t >> d;

        if (t > k)
        {
            t = t - k;
            k = 0;
        }
        else
        {
            k = k - t;
            t = 0;
        }

        T[i] = t;
        D[i] = d;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += T[i] * D[i];
    }

    cout << sum << endl;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}