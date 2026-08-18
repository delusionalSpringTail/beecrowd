#include <stdio.h>

int main(){
    int alcool = 0, gasolina = 0, diesel = 0;
    int userInput;
    while(1)
    {
        scanf("%d", &userInput);
        
        if(userInput == 1)
        {
            alcool++;
        }
        else if(userInput == 2)
        {
            gasolina++;
        }
        else if(userInput == 3)
        {
            diesel++;
        }
        else if(userInput == 4)
        {
            break;
        }
    }
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);
    
    return 0;
}   