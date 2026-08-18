#include <stdio.h>
int main()
{

    int firstNumber, secondNumber, thirdNumber, temp;
    scanf("%d %d %d", &firstNumber, &secondNumber, &thirdNumber);
    int x = firstNumber,
        y = secondNumber,
        z = thirdNumber;

    if (firstNumber > secondNumber)
    {
        temp = firstNumber;
        firstNumber = secondNumber;
        secondNumber = temp;
    }

    if (firstNumber > thirdNumber)
    {
        temp = firstNumber;
        firstNumber = thirdNumber;
        thirdNumber = temp;
    }
    if (secondNumber > thirdNumber)
    {
        temp = secondNumber;
        secondNumber = thirdNumber;
        thirdNumber = temp;
    }

    printf("%d\n%d\n%d\n\n", firstNumber, secondNumber, thirdNumber);
    printf("%d\n%d\n%d\n", x, y, z);

    return 0;
}