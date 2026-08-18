#include <stdio.h>

int main()
{

    int userInput, number, total = 0, rabbit = 0, rat = 0, frog = 0;
    char animal;
    scanf("%d", &userInput);

    for (int i = 0; i < userInput; i++)
    {
        scanf("%d %c", &number, &animal);
        total += number;
        if (animal == 'C')
            rabbit += number;
        else if (animal == 'R')
            rat += number;
        else if (animal == 'S')
            frog += number;
    }
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", rabbit);
    printf("Total de ratos: %d\n", rat);
    printf("Total de sapos: %d\n", frog);
    printf("Percentual de coelhos: %.2f %%\n", (rabbit * 100.0) / total);
    printf("Percentual de ratos: %.2f %%\n", (rat * 100.0) / total);
    printf("Percentual de sapos: %.2f %%\n", (frog * 100.0) / total);
    return 0;
}