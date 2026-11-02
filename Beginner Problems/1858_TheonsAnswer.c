#include <stdio.h>

int main()
{

    int n, t[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t[i]);
    }
    int smallest = t[0];
    int index = 1;

    for (int i = 1; i < n; i++)
    {
        if (t[i] < smallest)
        {
            smallest = t[i];
            index = i + 1;
        }
    }

    printf("%d\n", index);

    return 0;
}