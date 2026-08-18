#include <stdio.h>

int main()
{

    int userInput = 3;
    scanf("%d",&userInput);
    float numberOne, numberTwo, numberThree;

    for (int i = 1; i <= userInput; i++)
    {
        scanf("%f %f %f", &numberOne, &numberTwo, &numberThree);
        float result = (numberOne * 2 + numberTwo * 3 + numberThree * 5) / 10.0;
        printf("%.1f\n", result);
    }

    return 0;
}