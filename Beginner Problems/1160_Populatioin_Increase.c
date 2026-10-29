#include <stdio.h>

int main()
{
    int T;
    int PA, PB;
    double G1, G2;
    int i, years;

    (scanf("%d", &T));
    for (i = 0; i < T; i++)
    {
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);

        years = 0;

        while (PA <= PB)
        {
            PA += (int)(PA * (G1 / 100.0));
            PB += (int)(PB * (G2 / 100.0));

            years++;

            if (years > 100)
            {
                break;
            }
        }

        if (years > 100)
        {
            printf("Mais de 1 seculo.\n");
        }
        else
        {
            printf("%d anos.\n", years);
        }
    }

    return 0;
}
