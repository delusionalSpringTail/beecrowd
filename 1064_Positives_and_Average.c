#include <stdio.h>

int main()
{
    float number, total = 0;
    int count = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &number);
        if (number > 0)
        {
            count++;
            total += number;
        }
    }

    printf("%d valores positivos\n", count);
    if (count > 0)
    {
        printf("%.1f\n", total / count);
    }

    return 0;
}