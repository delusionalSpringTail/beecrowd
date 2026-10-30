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
            for (int col = 0; col < N; col++) {
                array[row][col] = 1 << (row + col);
            }
        }
        
        int max_val = array[N - 1][N - 1];
        int width = 0;
        while (max_val > 0) {
            width++;
            max_val /= 10;
        }

        for (int row = 0; row < N; row++)
        {
            for (int col = 0; col < N; col++)
            {
                if (col == 0)
                {
                    printf("%*d", width, array[row][col]);
                }
                else
                {
                    printf(" %*d", width, array[row][col]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
