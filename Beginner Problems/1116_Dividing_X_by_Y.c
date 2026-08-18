#include <stdio.h>

int main()
{
    int userInput;
    float x, y;
    scanf("%d", &userInput);

    for (int i = 0; i < userInput; i++)
    {
        scanf("%f %f", &x, &y);
        float result;
        if (y == 0)
        {
            printf("divisao impossivel\n");
        }else{
            result = x / y;
            printf("%.1f\n", result);
        }
        }

    return 0;
}