#include <bits/stdc++.h>

using namespace std;

int main()
{

    double y;
    double N[100];

    if (cin >> y)
    {
        N[0] = y;
        for (int i = 1; i < 100; i++)
        {
            N[i] = N[i - 1] / 2.0;
        }

        for (int i = 0; i < 100; i++)
        {
            cout << "N[" << i << "] = " << fixed << setprecision(4) << N[i] << "\n";
        }
    }

    return 0;
}