#include <stdio.h>
 
int main() {
 
    float userInput;
    scanf("%f", &userInput);

    if (userInput < 0 || userInput > 100)
    {
        printf("Fora de intervalo\n");
    }
    else if (userInput >= 0 && userInput <= 25)
    {
        printf("Intervalo [0,25]\n");
    }
    else if (userInput > 25 && userInput <= 50)
    {
        printf("Intervalo (25,50]\n");
    }
    else if (userInput > 50 && userInput <= 75)
    {
        printf("Intervalo (50,75]\n");
    }
    else
    {
        printf("Intervalo (75,100]\n");
    }
 
    return 0;
}