#include <stdio.h>

int main()
{

    int userInput;
    scanf("%d",&userInput);
    
    for (int i = 0; i <= 10000; i++)
    {
        if (i % userInput == 2)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}