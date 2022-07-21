#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    vector<int> store4(n);
    // vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        cin >> store4[i];
    }

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        int num = store4[i];

        while (num > 0)
        {
            int a = num % 10;
            num = num / 10;

            if (a == 4)
            {
                count++;
            }
        }

        cout<<count <<endl;
    }

}