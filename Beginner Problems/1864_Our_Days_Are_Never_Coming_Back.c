#include <stdio.h>

int main()
{

    char sentence[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int n;

    scanf("%d", &n);

    printf("%.*s\n", n, sentence);

    return 0;
}