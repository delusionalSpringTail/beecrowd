#include <stdio.h>
int main()
{

    for (int i = 0; i <= 10; i++)
    {
        for (int j = 5 + i; j <= i + 15; j += 5)
        {
            if (i % 5 == 0)
                printf("I=%d J=%d\n", (i / 5), (j / 5));
            else
                printf("I=%.1f J=%.1f\n", (i / 5.0), (j / 5.0));
        }
    }

    return 0;
}