#include <stdio.h>

int main()
{

    float sum = 1.0;
    int a = 2;
    for (int i = 3; i <= 39; i += 2)
    {

        sum = sum + ((float)i / a);
        a*=2.00;
    }

    printf("%.2f\n", sum);
    return 0;
}