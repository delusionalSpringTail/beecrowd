#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char str1[51], str2[51];
        scanf("%s %s", str1, str2);

        int j = 0, k = 0;
        while (str1[j] != '\0' || str2[k] != '\0')
        {
            if (str1[j] != '\0')
            {
                printf("%c", str1[j]);
                j++;
            }

            if (str2[k] != '\0')
            {
                printf("%c", str2[k]);
                k++;
            }
        }
        printf("\n");
    }

    return 0;
}