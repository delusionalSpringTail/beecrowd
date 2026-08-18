#include <stdio.h>

int main()
{
    int userInput;

    for (;;)
    {
        scanf("%d", &userInput);

        if (userInput == 0)
        {
            break;
        }
        for (int i = 1; i <= userInput; i++)
        {

            printf("%d", i);
            if (i != userInput)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}