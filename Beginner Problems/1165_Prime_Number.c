#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);

    for (int i = 1; i <= input; i++)
    {
        int num;
        scanf("%d", &num);

        if (num < 2)
        {
            printf("%d nao eh primo\n", num);
            continue;
        }

        int is_prime = 1;

        for (int j = 2; j * j <= num; j++)
        {
            if (num % j == 0)
            {
                is_prime = 0;
                break;
            }
        }

        if (is_prime == 1)
        {
            printf("%d eh primo\n", num);
        }
        else
        {
            printf("%d nao eh primo\n", num);
        }
    }

    return 0;
}
