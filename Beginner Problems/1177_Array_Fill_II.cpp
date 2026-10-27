#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    int n[1000];

    if (cin >> t)
    {
        for (int i = 0; i < 1000; i++)
        {
            n[i] = i % t;
        }

        for (int i = 0; i < 1000; i++)
        {
            cout << "N[" << i << "] = " << n[i] << "\n";
        }
    }

    return 0;
}