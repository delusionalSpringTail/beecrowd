#include <stdio.h>
 
int main() {
 

    int number, count = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &number);
        if (number % 2 == 0)
        {
            count++;
        }
    }
    printf("%d valores pares", count);
    printf("\n");
 
    return 0;
}