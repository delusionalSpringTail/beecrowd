#include <stdio.h>
int main()
{

    int start, end, result;
    scanf("%d %d", &start, &end);
    if (start == end)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if (start > end)
    {
        end = end + 24;
        result = end - start;
        printf("O JOGO DUROU %d HORA(S)\n", result);
    }
    else
    {
        result = end - start;
        printf("O JOGO DUROU %d HORA(S)\n", result);
    }

    return 0;
}