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
    int colLimit = 10;
    for (int row = 0; row < 11; row++)
    {
        for (int col = 0; col <= colLimit; col++)
        {
            sum += array[row][col];
            count++;
        }
        colLimit--;
    }

    if (T == 'M')
    {
        sum /= count;
    }

    printf("%.1f\n", sum);

    return 0;
}