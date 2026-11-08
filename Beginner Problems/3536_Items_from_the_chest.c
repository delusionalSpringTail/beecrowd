#include <stdio.h>
#include <string.h>

int main()
{
    int n;

    scanf("%d", &n);
    int arco = 0;
    int escudo = 0;
    int espada = 0;
    int pocao = 0;
    char item[50];

    while(n--)
    {
        scanf("%s", item);
        if (strcmp(item, "arco") == 0)
        {
            arco++;
        }
        else if (strcmp(item, "escudo") == 0)
        {
            escudo++;
        }
        else if (strcmp(item, "espada") == 0)
        {
            espada++;
        }
        else if (strcmp(item, "pocao") == 0)
        {
            pocao++;
        }
    }

    printf("arco %d\n", arco);
    printf("escudo %d\n", escudo);
    printf("espada %d\n", espada);
    printf("pocao %d\n", pocao);

    return 0;
}
