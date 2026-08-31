#include <stdio.h>
int main()
{

    int input, first = 0, second = 1, next;
    scanf("%d", &input);

    for (int i = 1; i <= input; i++)
    {
        printf("%d", first);
        if (i < input)
        {
            printf(" ");
        }
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");

    return 0;
}