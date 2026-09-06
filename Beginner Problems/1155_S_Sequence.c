#include <stdio.h>
int main()
{

    float sum = 1;

    for (int i = 2; i <= 100; i++)
    {
        sum = sum + (1.0 / i);
    }

    printf("%.2f\n", sum);
    return 0;
}