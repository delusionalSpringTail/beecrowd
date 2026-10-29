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
    for (int row = 0; row < 12; row++)
    {
        for (int col = row + 1; col < 12; col++)
        {
            sum += array[row][col];
            count++;
        }
    }

    if (T == 'M')
    {
        sum /= count;
    }

    printf("%.1f\n", sum);

    return 0;
}