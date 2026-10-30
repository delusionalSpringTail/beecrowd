#include <stdio.h>
int main()
{

    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        if (i == t)
        {
            printf("Ho!\n");
        }else{

            printf("Ho ");
        }
    }

    return 0;
}