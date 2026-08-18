#include <stdio.h>

int main()
{

    int firstNumber, secondNumber;
    scanf("%d %d", &firstNumber, &secondNumber);

    if (firstNumber > secondNumber)
    {
        int temp = secondNumber;
        secondNumber = firstNumber;
        firstNumber = temp;
    }

    for (int i = firstNumber + 1; i < secondNumber; i++)
    {
        if (i % 5 == 2 || i % 5 == 3)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}