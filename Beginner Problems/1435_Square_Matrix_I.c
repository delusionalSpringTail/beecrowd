#include <stdio.h>
int main()
{

    int N;
    while (1)
    {
        scanf("%d", &N);
        if (N == 0)
        {
            break;
        }
        else
        {
            int array[N][N];
            for (int row = 0; row < N; row++)
            {
                for (int col = 0; col < N; col++)
                {
                    array[row][col] = 1;
                }
            }
            for (int row = 0; row < N; row++)
            {
                for (int col = 0; col < N; col++)
                {
                    printf("%d", array[row][col]);
                }
                printf("\n");
            }
        }
    }

    return 0;
}