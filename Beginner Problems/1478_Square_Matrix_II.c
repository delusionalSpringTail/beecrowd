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

        int array[N][N];

        for (int row = 0; row < N; row++)
        {
            for (int col = 0; col < N; col++)
            {
                if (row >= col)
                {
                    array[row][col] = (row - col) + 1;
                }
                else
                {
                    array[row][col] = (col - row) + 1;
                }
            }
        }
        for (int row = 0; row < N; row++)
        {
            for (int col = 0; col < N; col++)
            {
                if (col == 0)
                {
                    printf("%3d", array[row][col]);
                }
                else
                {
                    printf(" %3d", array[row][col]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
