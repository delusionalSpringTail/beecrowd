#include <stdio.h>
int main()
{
    int sum = 0, count = 0;
    while (1)
    {
        int input;
        scanf("%d", &input);

        if (input < 0)
        {
            break;
        }
        count++;
        sum = sum + input;
    }
    float result = (float)sum / (count);
    printf("%.2f\n", result);
    return 0;
}