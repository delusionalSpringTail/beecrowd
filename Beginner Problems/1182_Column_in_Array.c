#include <stdio.h>
int main()
{

    int C;
    char T;
    double array[12][12];

    scanf("%d %c", &C, &T);

    for (int row = 0; row < 12; row++)
    {
        for (int col = 0; col < 12; col++)
        {
            scanf("%lf", &array[row][col]);
        }
    }
    double sum = 0;
    for (int i = 0; i < 12; i++)
    {
        sum += array[i][C];
    }

    if (T == 'M')
    {
        sum /= 12.0;
    }

    printf("%.1f\n", sum);

    return 0;
}