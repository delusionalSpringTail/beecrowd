#include <stdio.h>
#include <string.h>
int main()
{

    int t;
    scanf("%d", &t);
    int force;
    char name[100];
    while (t--)
    {
        scanf("%s %d", name, &force);
        if (strcmp(name, "Thor") == 0)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
}