#include <stdio.h>
int main()
{

    char T;
    double array[12][12];

    scanf("%c", &T);

    for (int row = 0; row < 12; row++)
    {
        for (int col = 0; col < 12; col++)
        {
            scanf("%lf", &array[row][col]);
        }
    }

    double sum = 0;
    int count = 0;
    int colStart = 5;
    int colEnd = 6;
    for (int row = 7; row < 12; row++)
    {
        for (int col = colStart; col <= colEnd; col++)
        {
            sum += array[row][col];
            count++;
        }
        colStart--;
        colEnd++;
    }

    if (T == 'M')
    {
        sum /= count;
    }

    printf("%.1f\n", sum);

    return 0;
}