#include <bits/stdc++.h>

using namespace std;

int main()
{

    int N;
    if (cin >> N)
    {
        vector<int> X(N);

        cin >> X[0];
        int lowest = X[0];
        int pos = 0;

        for (int i = 1; i < N; i++)
        {
            cin >> X[i];
            if (X[i] < lowest)
            {
                lowest = X[i];
                pos = i;
            }
        }

        cout << "Menor valor: " << lowest << "\n";
        cout << "Posicao: " << pos << "\n";
    }

    return 0;
}
