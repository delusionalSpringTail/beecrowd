#include <stdio.h>

int main()
{

    int userInput=100, numbers, count = 0, highest = 0;

    for (int i = 1; i <= userInput; i++)
    {
        scanf("%d", &numbers);
        if (numbers > highest)
        {
            highest = numbers;
            count = i;
        }
    }
    printf("%d\n", highest);
    printf("%d\n", count);
    return 0;
}