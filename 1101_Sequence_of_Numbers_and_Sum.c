#include <stdio.h>

int main()
{
    int first, last;

    while (1)
    {
        scanf("%d %d", &first, &last);

        if (first <= 0 || last <= 0)
        {
            break;
        }

        if (first > last)
        {
            int temp = first;
            first = last;
            last = temp;
        }

        int sum = 0;
        for (int i = first; i <= last; i++)
        {
            sum += i;
            printf("%d ", i);
        }
        printf("Sum=%d\n", sum);
    }

    return 0;
}   