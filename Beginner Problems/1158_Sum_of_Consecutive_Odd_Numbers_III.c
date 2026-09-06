#include <stdio.h>

int main()
{

    int input, first, second, sum = 0;
    scanf("%d", &input);

    for (int i = 1; i <= input; i++)
    {
        scanf("%d %d", &first, &second);
        // printf("first :%d second :%d\n", first, second);
        if (first % 2 == 0)
        {
            first++;
        }

        for (int i = first; i < first + (second * 2); i += 2)
        {
            sum = sum + i;
        }
        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}