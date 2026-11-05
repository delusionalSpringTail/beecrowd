#include <stdio.h>

int main()
{
    int n;
    char course[100];

    scanf("%d", &n);
    while (n--)
    {
        scanf(" %[^\n]", course);
    }

    printf("Ciencia da Computacao\n");

    return 0;
}
