#include <stdio.h>
#include <string.h>

int main()
{
    char type[20], class[20], diet[20];

    scanf("%s %s %s", type, class, diet);

    if (strcmp(type, "vertebrado") == 0)
    {
        if (strcmp(class, "ave") == 0)
        {
            if (strcmp(diet, "carnivoro") == 0)
                printf("aguia\n");
            else if (strcmp(diet, "onivoro") == 0)
                printf("pomba\n");
        }
        else if (strcmp(class, "mamifero") == 0)
        {
            if (strcmp(diet, "onivoro") == 0)
                printf("homem\n");
            else if (strcmp(diet, "herbivoro") == 0)
                printf("vaca\n");
        }
    }
    else if (strcmp(type, "invertebrado") == 0)
    {
        if (strcmp(class, "inseto") == 0)
        {
            if (strcmp(diet, "hematofago") == 0)
                printf("pulga\n");
            else if (strcmp(diet, "herbivoro") == 0)
                printf("lagarta\n");
        }
        else if (strcmp(class, "anelideo") == 0)
        {
            if (strcmp(diet, "hematofago") == 0)
                printf("sanguessuga\n");
            else if (strcmp(diet, "onivoro") == 0)
                printf("minhoca\n");
        }
    }

    return 0;
}