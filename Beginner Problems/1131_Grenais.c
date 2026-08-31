#include <stdio.h>
int main()
{

    int interWin = 0, gremioWin = 0, draw = 0, operation, match = 0;

    while (1)
    {
        int interGoal, gremioGoal;
        scanf("%d %d", &interGoal, &gremioGoal);

        if (interGoal > gremioGoal)
        {
            interWin++;
        }
        else if (gremioGoal > interGoal)
        {
            gremioWin++;
        }
        else
        {
            draw++;
        }

        match++;

        do
        {
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &operation);
        } while (operation != 1 && operation != 2);

        if (operation == 2)
        {
            break;
        }
    }

    printf("%d grenais\n", match);
    printf("Inter:%d\n", interWin);
    printf("Gremio:%d\n", gremioWin);
    printf("Empates:%d\n", draw);
    if (interWin > gremioWin)
    {
        printf("Inter venceu mais\n");
    }
    else if (gremioWin > interWin)
    {
        printf("Gremio venceu mais\n");
    }
    else
    {
        printf("Nao houve vencedor\n");
    }

    return 0;
}