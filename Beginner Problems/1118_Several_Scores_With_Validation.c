#include <stdio.h>

int main()
{
    int operation;
    while (1)
    {
        int count = 0;
        double sum = 0, input;

        while (count < 2)
        {
            scanf("%lf", &input);
            if (input < 0 || input > 10)
                printf("nota invalida\n");
            else
            {
                sum += input;
                count++;
            }
        }

        printf("media = %.2lf\n", sum / 2);

        do
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &operation);
        } while (operation != 1 && operation != 2);

        if (operation == 2)
            break;
    }

    return 0;
}