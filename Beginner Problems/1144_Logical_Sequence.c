#include <stdio.h>

int main()
{

    int userInput;
    scanf("%d", &userInput);

    for (int i = 1; i <= userInput; i++)
    {
        printf("%d %d %d\n", i, i * i, i * i * i);
        printf("%d %d %d\n", i, i * i + 1, i * i * i + 1);
    }

    return 0;
}