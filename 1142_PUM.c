#include <stdio.h>
int main()
{

    int userInput;
    scanf("%d", &userInput);

    for (int i = 1; i <= (userInput * 4); i++)
    {

        if (i % 4 == 0)
        {
            printf("PUM\n");
            continue;
        }
        else
        {
            printf("%d ", i);
        }
    }

    return 0;
}