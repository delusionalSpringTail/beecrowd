#include <stdio.h>
int main()
{

    int X, Z, sum = 0, count = 0;

    scanf("%d %d", &X, &Z);

    while (Z <= X)
    {
        scanf("%d", &Z);
    }

    for (int i = X;; i++)
    {
        sum += i;
        count++;
        if (sum > Z)
        {
            break;
        }
    }
    printf("%d\n", count);

    return 0;
}