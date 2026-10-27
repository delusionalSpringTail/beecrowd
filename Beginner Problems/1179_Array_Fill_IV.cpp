#include <bits/stdc++.h>

using namespace std;

int main()
{

    int par[5];
    int impar[5];
    int parCount = 0, iCount = 0;
    int num;

    for (int i = 0; i < 15; i++)
    {
        cin >> num;

        if (num % 2 == 0)
        {
            par[parCount] = num;
            parCount++;
            if (parCount == 5)
            {
                for (int j = 0; j < 5; j++)
                {
                    cout << "par[" << j << "] = " << par[j] << "\n";
                }
                parCount = 0;
            }
        }
        else
        {
            impar[iCount] = num;
            iCount++;
            if (iCount == 5)
            {
                for (int j = 0; j < 5; j++)
                {
                    cout << "impar[" << j << "] = " << impar[j] << "\n";
                }
                iCount = 0;
            }
        }
    }

    for (int j = 0; j < iCount; j++)
    {
        cout << "impar[" << j << "] = " << impar[j] << "\n";
    }

    for (int j = 0; j < parCount; j++)
    {
        cout << "par[" << j << "] = " << par[j] << "\n";
    }

    return 0;
}
