#include <stdio.h>
int main()
{

    int N;
    while (1)
    {
        scanf("%d", &N);
        if (N == 0)
            break;

        int array[N][N];

        int layer = N / 2;
        if (N % 2 == 1)
            layer++;
        int start = 0, end = N - 1;
        for (int k = 1; k <= layer; k++)
        {
            for (int i = start; i <= end; i++)
            {
                for (int j = start; j <= end; j++)
                {
                    array[i][j] = k;
                }
            }
            start++;
            end--;
        }

        for (int row = 0; row < N; row++)
        {
            for (int col = 0; col < N; col++)
            {
                if (col == 0)
                    printf("%3d", array[row][col]);
                else
                    printf(" %3d", array[row][col]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}