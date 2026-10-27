#include <bits/stdc++.h>

using namespace std;
int main()
{

    int a[20];

    for (int i = 0; i < 20; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        swap(a[i], a[19 - i]);
    }
    for (int i = 0; i < 20; i++)
    {
        cout << "N[" << i << "] = " << a[i] << "\n";
    }

    return 0;
}