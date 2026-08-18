#include <stdio.h>

int main()
{

    int lastNumber;
    scanf("%d", &lastNumber);

    for (int i = 1; i <= lastNumber; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d^%d = %d\n", i, 2, (i * i));
        }
    }

    return 0;
}