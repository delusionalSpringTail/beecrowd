#include <stdio.h>

int main()
{

    int howManyScanf, numbers;
    scanf("%d", &howManyScanf);

    for (int i = 0; i < howManyScanf; i++)
    {
        scanf("%d", &numbers);
        if (numbers == 0)
        {
            printf("NULL\n");
        }
        else if (numbers % 2 == 0 && numbers > 0)
        {
            printf("EVEN POSITIVE\n");
        }
        else if (numbers % 2 == 0 && numbers < 0)
        {
            printf("EVEN NEGATIVE\n");
        }
        else if (numbers % 2 != 0 && numbers < 0)
        {
            printf("ODD NEGATIVE\n");
        }
        else if (numbers % 2 != 0 && numbers > 0)
        {
            printf("ODD POSITIVE\n");
        }
    }

    return 0;
}