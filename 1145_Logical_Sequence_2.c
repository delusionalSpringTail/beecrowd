#include <stdio.h>

int main()
{

    int breakPoint, lastNumber;
    scanf("%d %d", &breakPoint, &lastNumber);

    for (int i = 1; i <= lastNumber; i++)
    {
        printf("%d", i);
        if (i % breakPoint == 0)
        {
            printf("\n");
        }else{
            printf(" ");
        }
    }

    return 0;
}