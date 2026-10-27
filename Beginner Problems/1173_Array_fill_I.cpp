#include <bits/stdc++.h>
using namespace std;
int main()
{
    //g++ 1173_Array_fill_I.cpp -o main && ./main    
    int v;
    cin >> v;

    int n[10];
    n[0] = v;

    for (int i = 1; i < 10; i++)
    {
        n[i] = n[i - 1] * 2;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << "N[" << i << "] = " << n[i] << endl;
    }

    return 0;
}