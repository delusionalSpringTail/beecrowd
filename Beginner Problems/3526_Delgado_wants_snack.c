#include <stdio.h>

int main()
{
    int S, P, N;

    while (scanf("%d %d %d", &S, &P, &N) == 3)
    {
        if (P <= (S - (N * P)))
        {
            printf("SIM\n");
        }
        else
        {
            printf("NAO\n");
        }
    }

    return 0;
}
