#include <stdio.h>

int main()
{

    int userInput;
    scanf("%d",&userInput);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", i, userInput, (userInput * i));
    }

    return 0;
}