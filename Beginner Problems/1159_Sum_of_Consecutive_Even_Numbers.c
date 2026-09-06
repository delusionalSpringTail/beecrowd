#include <stdio.h>

int main()
{

    while (1)
    {

        int input, sum = 0;
        scanf("%d", &input);
        if (input == 0)
        {
            break;
        }

        if (input % 2 != 0)
        {
            input++;
        }
        for (int i = input; i <= input + 8; i += 2)
        {
            sum = sum + i;
        }

        printf("%d\n", sum);
    }

    return 0;
}