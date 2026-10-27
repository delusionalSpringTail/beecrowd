#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t, n;

    long long f[61];

    f[0] = 0, f[1] = 1;
    for (int i = 2; i < 61; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }

    if (cin >> t)
    {
        for (int i = 0; i < t; i++)
        {
            cin >> n;
            cout << "Fib(" << n << ") = " << f[n] << "\n";
        }
    }

    return 0;
}