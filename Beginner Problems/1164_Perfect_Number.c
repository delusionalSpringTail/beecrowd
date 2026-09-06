#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);

    for (int i = 1; i <= input; i++)
    {
        int number;
        scanf("%d", &number);

        int half = number / 2;
        int sum = 0;

        for (int j = 1; j <= half; j++)
        {
            if (number % j == 0)
            {
                sum += j;
            }
        }

        if (sum == number)
        {
            printf("%d eh perfeito\n", number);
        }
        else
        {
            printf("%d nao eh perfeito\n", number);
        }
    }

    return 0;
}
