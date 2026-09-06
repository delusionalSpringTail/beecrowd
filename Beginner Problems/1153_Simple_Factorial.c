#include <stdio.h>
int main()
{

    int input;
    scanf("%d", &input);

    int factorial = 1;

    for (int i = input; i > 1; i--)
    {
        factorial = factorial * i;
    }

    printf("%d\n", factorial);
    return 0;
}